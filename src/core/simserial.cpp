
//   "Aspen SIM800" is a comprehensive SIM800 library for simplified and in-depth chip access.
//   Copyright (C) 2016  Mattias Aabmets (https://github.com/aspenforest)
//
//   This API library is free software: you can redistribute it and/or modify
//   it under the terms of the GNU Affero General Public License as published
//   by the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
//   This API library is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
//   See the GNU Affero General Public License for more details.
//
//   You should have received a copy of the GNU Affero General Public License
//   along with this API library.  If not, see <http://www.gnu.org/licenses/>.


#include <SIM800.h>
#include <SoftwareSerial.h>

SoftwareSerial simCom (DEF_RX_PIN, DEF_TX_PIN);


// ============================================================
void SIM800::begin(unsigned long speed) {                       // Initializes SoftwareSerial object with the baudrate provided by the user.
    serialSpeed = speed;                                        // If this method is called without args, the simCom serial object will be initialized with the default baudrate as specified in the SIM800.h file.
    resetTimeout();                                             // Sets the read() max time limit to a value as defined in the SIM800.h file.
    #ifdef DEBUG
    debug(BEGIN);                                               // If #define DEBUG is uncommented in the SIM800.h file, print serialSpeed, DEF_RX_PIN, and DEF_TX_PIN to Serial Monitor.
    #endif
    simCom.begin(speed);                                        // Calls SoftwareSerial method "begin" either with default baudrate or user provided baudrate.
}


// ============================================================
void SIM800::write(char* out) {                                 // This method accepts a character array as an input.
    simCom.print(out);                                          // Let SoftwareSerial do the actual hard work of banging the outgoing cmd string bit-by-bit out to the SIM800 chip.
}                                                               // No read() is called. As mostly all AT cmds cause the SIM800 chip to provide some kind of reply, 
                                                                // the user runs the risk of missing them if they do not call read() after manually calling the write(char[]) method.

// ============================================================
void SIM800::print(char* out) {                                 // This method accepts a character array as an input.
    strcat(out, "\r\n");                                        // SIM800 chip needs "\r\n" at the end of cmd string to recognize the end of line.
    simCom.print(out);                                          // Let SoftwareSerial do the actual hard work of banging the outgoing cmd string bit-by-bit out to the SIM800 chip.
    read();                                                     // Call read() which parses the reply provided by the SIM800 module into the ioBuffer char array.
}


// ============================================================
bool SIM800::available() {                                      // Checks if the SIM800 module has sent an Unsolicited Result Code.
    read();                                                     // Example: when someone phonecalls into the module, it sends out "RING" message.
    if (strlen(ioBuffer) > 0) {                                 // If the call to read() resulted in the presence of values not equal to zero in the ioBuffer array,
        return true;                                            // indicate that the ioBuffer now contains an URC sent from the SIM800 chip.
    }
    return false;                                               // Otherwise, indicate that ioBuffer is still empty and hence, no URC has been sent from the SIM800 chip.
}


// ============================================================
void SIM800::setTimeout(uint16_t limit) {                       // Sets read() max time limit to the user specified value in milliseconds.
    timeLimit = 1000 * (unsigned long)limit;                    // Multiplies the provided millisecond value with 1000 to get microseconds, 
}                                                               // because the internal timeOut method uses micros() to calculate timeout.


// ============================================================
void SIM800::resetTimeout() {                                   // Resets read() max time limit to the millisecond value defined in SIM800.h file.
    timeLimit = 1000 * DEF_TIME_LIMIT;                          // Multiplies the provided millisecond value with 1000 to get microseconds, 
}                                                               // because the internal timeOut method uses micros() to calculate timeout.


// ============================================================
uint16_t SIM800::getTimeout() {                                 // Returns the currently active read() max time limit in milliseconds.
    return (uint16_t)(timeLimit / 1000);                        // Since timeLimit is internally stored in microseconds, it has to be divided by 1000 to give out a value in milliseconds.
}


// ============================================================
void SIM800::overrideTimeout(uint16_t limit) {                  // This method temporarily overrides the currently active read() max time limit for one time only
    static unsigned long oldTimeLimit = 0;                      // when the next read() is called whichever way (either by an AT method or through manual call to print().
    static bool isOverride = false;                             // This is useful for AT cmds which take internally longer time to process a reply before sending it out.

    if (!isOverride && limit != 0) {                            // If override has not already been set,
        oldTimeLimit = timeLimit;                               // save current time limit value,
        setTimeout(limit);                                      // set the new time limit value and
        isOverride = true;                                      // indicate that override has been enabled.
    } else if (isOverride && limit == 0) {                      // If override has been enabled and it's called with an arg of 0,
        timeLimit = oldTimeLimit;                               // restore previously saved time limit value and
        isOverride = false;                                     // indicate that override has been disabled.
    }
}


// ============================================================
void SIM800::detectEndStr(bool b) {                             // This method enables or disables the detection of the end strings "OK" and "ERROR".
    endChar = b ? 10 : 255;                                     // SIM800 module provides only (char)10 as the line termination character. 
}                                                               // If set to 255, no line termination char and end str is detected and
                                                                // thus the read() method will wait as long as set in the timeLimit global var.

// ============================================================
void SIM800::setSlicePoint(uint32_t p) {                        // This function enables the "scanning" of replies larger than the ioBuffer.
    slicePoint = p + 1;                                         // Each character which is read by the read() method is counted. 
}                                                               // If a slice point has been set, read() discards all chars received before the slice point
                                                                // and begins to save the reply from SIM800 into ioBuffer starting from the slice point.

// ============================================================
void SIM800::directSerialMonitor() {                            // Directly exchanges messages between Serial Monitor and SIM800 module.
    if (Serial.available()) {                                   // This should be used as the only statement inside the loop() function of a sketch.
        simCom.write(Serial.read());
    }
    if (simCom.available()) {
        Serial.print((char)simCom.read());
    }
}


// ============================================================
void SIM800::cmdBenchmark(bool b) {                             // Enables or disables the calculation of AT commands execution durations.
    if (b) {                                                    // All AT commands take different amounts of time to execute.
        timeOut(SETBM);                                         // This method can be used to measure their approximate execution time to
    } else {                                                    // determine proper timeLimit values for the overrideTimeout() method.
        timeOut(UNSETBM);                                       // If #define DEBUG is uncommented in the SIM800.h file, the execution duration 
        benchTime = 0;                                          // (in milliseconds) of each call to read() is printed to the Serial Monitor.
    }
}


// ============================================================
void SIM800::read() {                                           // The main function which parses the responses provided by the SIM800 chip into the ioBuffer char array.
    clearBuffer();                                              // First the ioBuffer is cleared from old data.
    timeOut(INIT);                                              // Initial timestamp is taken to calculate the reply timeout.
    while (!simCom.available()) {                               // If the module does not reply at all, indicate timeout.
        if (timeOut(RUN)) {
            strcat_P(ioBuffer, P("TIMEOUT"));
            break;
        }
    }
    uint32_t i = 0;                                                 // The counter which counts each char received from the SIM800 module.
    while (!timeOut(RUN)) {                                         // While time has not run out (timeLimit has not been reached).
        if (simCom.available()) {                                   // If next char becomes available
            timeOut(DELAY);                                         // If benchmark has not been enabled, take new timestamp to delay timeout.
            if (slicePoint == 0 && i < DEF_BUFFER_SIZE) {           // If slicing is disabled and the ioBuffer is not full,
                ioBuffer[i] = simCom.read();                        // read the available char into ioBuffer index i.
                if (ioBuffer[i] == endChar && endOfTx(i)) break;    // If the value read equals 10 and endOfTx at index i detects presence of "OK" or "ERROR", end read().
                i++;                                                // Else, increment char counter.
            } else if (slicePoint != 0 && slicePoint == i + 1) {    // If slicing has been enabled and the char counter has reached the value indicated by the slicePoint,
                i = slicePoint = 0;                                 // reset char counter and disable slicing, which in turn allows chars to be saved into the ioBuffer.
            } else {                                                // If slicing is enabled and slice point has not been reached, OR, the ioBuffer is full,
                simCom.read();                                      // read the available chars into sink (discard them)
                i++;                                                // and increment the char counter.
            }
        }
    }
    timeOut(GETBM);                                              // If benchmark has been enabled, calculate the time it took to receive the reply and save it into global variable benchTime.
    overrideTimeout(0);                                          // If override is enabled, disable override and put the old timeLimit value back into the timeLimit variable.
    replaceEscapeChars();                                        // If enabled, replace unreadable ASCII control chars 10 and 13 with spaces. This is necessary for the reply() method to work properly.
    slicePoint = 0;                                              // If slicing had been enabled, but the reply never reached the slice point (slicePoint value is larger than reply char count), disable slicing to prevent errors.

#ifdef DEBUG
debug(REPLY);                                                    // If #define DEBUG is uncommented in the SIM800.h file, print the contents of ioBuffer to Serial Monitor.
#endif
}


// ============================================================
bool SIM800::timeOut(TimerType cmd) {                           // The main timeout function which calculates if the current read() execution has exceeded the set time limit.
    static unsigned long timeStamp;                             // If execution duration has exceeded set time limit, returns true. Else returns false.
    static bool benchmark = false;                              // Benchmark is most useful if detectEndStr is enabled, otherwise it will just return the max timeLimit.
    
    unsigned long currentTime = micros();                       // Each call to timeOut gets the current time first before deciding what to output.

    switch (cmd) {
        case DELAY:
            if (!benchmark) timeStamp = currentTime;                        // If benchmark is disabled, set new timeStamp to delay the timeout.
            break;                                                          // This causes the read() method to count timeout from the last char it has received.
        case RUN:
            if (currentTime - timeStamp >= this->timeLimit) return true;    // If timeLimit is exceeded, return true.
            break;
        case INIT:
            timeStamp = currentTime;                                        // Initialize timeStamp. This is done once first each time read() is called.
            break;
        case GETBM:
            if (benchmark) this->benchTime = currentTime - timeStamp;       // If benchmark is enabled, save read() execution duration into global variable benchTime.
            break;
        case SETBM:
            benchmark = true;                                               // Enables read() benchmarking.
            break;
        case UNSETBM:
            benchmark = false;                                              // Disables read() benchmarking.
            break;
    }

    return false;
}