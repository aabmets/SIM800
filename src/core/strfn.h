
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


public:
    bool reply(char*);              // Returns true if char[] arg is found in ioBuffer.
    bool isError();                 // Shortcut to reply("OK").
    char* getBuffer();              // Returns the raw ioBuffer. Useful for saving data from ioBuffer to external devices.
    void clearBuffer();             // Erases the contents of ioBuffer by filling it with zeroes.
    void formatReply(bool);         // Selects if replaceEscapeChars() is executed after each call to read().
                                    // reply(str) might not work properly if formatReply(false) is called.
private: 
    void replaceEscapeChars();                                      // Method responsible for replacing non-readable ascii chars with spaces. Destroys formatting of other charsets.
    void outBuilder(CmdType, char *, const char *, bool = true);    // Called by each AT wrapper method. Builds the AT cmd which is sent to the SIM800 module.
    bool endOfTx(uint32_t);                                         // Method responsible for detecting the presence of end strings "OK" and "ERROR" in ioBuffer, if enabled.

    bool fmtReplyEnable = true;      // If true, replaceEscapeChars() is executed after each call to read(). 
                                     // Call formatReply(false) to set it to false.
                                     // reply(str) might not work properly if fmtReplyEnable == false.