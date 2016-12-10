
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


private:
    enum TimerType {DELAY, RUN, INIT, GETBM, SETBM, UNSETBM};       // Internal type used by timeOut() to select operation functionality.

public:
    void begin(unsigned long = DEF_SPEED);      // Begins SoftwareSerial with user provided baudrate or default value defined in the SIM800.h file.
    void write(char*);                          // Writes provided char[] to SIM800 module. Does not append "\r\n" and does not call read().
    void print(char*);                          // Prints provided char[] to SIM800 module. Appends "\r\n" and calls read().
    bool available();                           // Calls read(). If the ioBuffer contains a message from the SIM800 module, returns true.
    void setTimeout(uint16_t);                  // Sets timeout to user provided value in milliseconds.
    void resetTimeout();                        // Resets timeout to value defined in the SIM800.h file.
    uint16_t getTimeout();                      // Returns the currently active time limit to the user.
    void overrideTimeout(uint16_t);             // Temporarily overrides the time limit for the next call to read() only.
    void detectEndStr(bool);                    // Enables or disables the detection of words "OK" or "ERROR" in replies from the SIM800 chip.
    void setSlicePoint(uint32_t);               // If arg != 0, makes read() discard received chars up to (not including) the slicePoint.
    void directSerialMonitor();                 // Directly exchanges messages between Serial Monitor and the SIM800 chip.
    void cmdBenchmark(bool);                    // Measures the time it takes for the SIM800 module to process the current command.
     
private:
    void read();                                // Reads the reply from SIM800 module into ioBuffer char array.
    bool timeOut(TimerType);                    // Responsible for breaking read() out of read loop if there is a communication error.
 
    char ioBuffer[DEF_BUFFER_SIZE];             // The char array which holds outgoing commands and incoming replies.
    
    unsigned long serialSpeed;                  // Contains the baudrate in use.
    unsigned long timeLimit;                    // Contains the read() time limit value in microseconds.
    char endChar = 10;                          // The char to look for in the reply string. If set to 255, detectEndStr is disabled.
    uint32_t slicePoint = 0;                    // The received character index from which the reply should be saved into ioBuffer.
    unsigned long benchTime = 0;                // Contains the value of the last cmd processing duration.