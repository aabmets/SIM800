
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


// ============================================================
bool SIM800::reply(char* str) {                                     // Checks if the reply received from the SIM800 module contains the string provided by the user.
    char* chp = strstr(ioBuffer, str);                              // If the string is present in the ioBuffer, char* chp != 0 and returns true.
    if (chp != 0) {                                                 // Can be used as: if (reply("string")) {do this}
        return true;
    }
    return false;
}


// ============================================================
bool SIM800::isError() {                                            // Shortcut to: if (reply("OK")) {...}
    return reply("OK") ? false : true;                              // Can be used as: if (isError) errorHandler(); (errorHandler() must be created by the user in their sketch)
}


// ============================================================
char* SIM800::getBuffer() {                                         // Returns a pointer to the ioBuffer array. This is used for directly accessing the ioBuffer.
    return ioBuffer;                                                // Useful for directly manipulating the ioBuffer or for saving a string from a html webpage into EEPROM or microSD.
}


// ============================================================
void SIM800::clearBuffer() {                                        // Clears the contents of the ioBuffer by filling it with zeroes.
    for (uint16_t i = 0; i < DEF_BUFFER_SIZE; i++) { 
        ioBuffer[i] = 0; 
    }
}


// ============================================================
void SIM800::formatReply(bool b) {                                  // Selects if non-readable ascii chars (or other charset ctrl chars) should be replaced with ' '.
    fmtReplyEnable = b ? true : false;                              // fmtReplyEnable should be set to false when browsing webpages, because most webpages
}                                                                   // are in UTF-8 or Unicode and replaceEscapeChars() can make webpages unreadable by destroying their formatting. 
                                                                    // Calling formatReply(false) can make reply() return erroneous results.

// ============================================================
void SIM800::replaceEscapeChars() {                                 // Replaces unreadable ASCII control chars 10 and 13 (and others) with spaces. 
    if (fmtReplyEnable == true) {                                   // This is necessary for the reply(str) method to work properly.
        for (uint16_t i = 0; i < DEF_BUFFER_SIZE; i++) {
            if (ioBuffer[i] != 0 && (ioBuffer[i] < 32 || ioBuffer[i] > 126)) 
                ioBuffer[i] = ' ';
        }
    }
}


// ============================================================
void SIM800::outBuilder(CmdType type, char * param, const char * cmd, bool b) {     // Builds the outgoing AT command which gets sent to the SIM800 module.
    clearBuffer();                                                                  // Clear the ioBuffer of old data.
    if (b) strcat_P(ioBuffer, P("AT+"));                                            // If it is enabled in the specific AT method, prepend AT+ to the cmd.
    if (cmd != "") strcat_P(ioBuffer, cmd);                                         // If cmd == "" and it is strcat_P onto ioBuffer, it can produce erroneous results.

    switch (type) {
        case TEST:                                                          // AT method TEST = AT command type TEST in official manual
            strcat_P(ioBuffer, P("=?")); 
            break;
        case GET:                                                           // AT method GET = AT command type READ in official manual
            strcat_P(ioBuffer, P("?")); 
            break;
        case SET:                                                           // AT method SET = AT command type WRITE in official manual
            strcat_P(ioBuffer, P("="));
        case EXE:                                                           // AT method EXE = AT command type EXECUTE in official manual
            if(strlen(ioBuffer) + strlen(param) <= DEF_BUFFER_SIZE) {       // If the sum of AT cmd and param length is greater than the size of ioBuffer, indicate buffer overflow,
                strcat(ioBuffer, param);                                    // else, concat param to outgoing AT cmd if type == SET or EXE
            } else {
                clearBuffer();
                strcat_P(ioBuffer, P("BUFFER OVERFLOW"));
            }   
    } 
}


// ============================================================
bool SIM800::endOfTx(uint32_t i) {                                          // Method responsible for detecting the end strings "OK" and "ERROR".
    if (ioBuffer[i-2] != 'K' && ioBuffer[i-2] != 'R')                       // If detectEndStr is true, this function is run each time the currently read
        return false;                                                       // char == 10 (line terminator). If it finds either "10, 79, 75, 13, 10" or 
    if (ioBuffer[i-3] != 'O')                                               // "10, 69, 82, 82, 79, 82, 13, 10" in the ioBuffer, it returns true to indicate the end of transmission.
        return false;                                                       // This enables the read() method to exit the read loop earlier before it times out
    if (ioBuffer[i-4] != 'R' && ioBuffer[i-4] == 10)                        // and to speed up the communication between the two devices.
        return true;
    if (ioBuffer[i-5] != 'R') 
        return false;
    if (ioBuffer[i-6] != 'E') 
        return false;
    if (ioBuffer[i-7] == 10) 
        return true;

    return false;
}