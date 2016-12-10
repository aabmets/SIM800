
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
void SIM800::httpInit(CmdType type) {
    outBuilder(type, "", P("HTTPINIT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::httpEnd(CmdType type) {
    outBuilder(type, "", P("HTTPTERM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::httpParams(CmdType type, char* str) {
    outBuilder(type, str, P("HTTPPARA"));
    print(ioBuffer);
}

// ============================================================
void SIM800::httpData(CmdType type, char* str) {
    outBuilder(type, str, P("HTTPDATA"));
    print(ioBuffer);
}

// ============================================================
void SIM800::httpAction(CmdType type, char* str) {
    outBuilder(type, str, P("HTTPACTION"));
    print(ioBuffer);
}

// ============================================================
void SIM800::httpRead(CmdType type, char* str) {
    outBuilder(type, str, P("HTTPREAD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::httpSave(CmdType type) {
    outBuilder(type, "", P("HTTPSCONT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::httpStatus(CmdType type) {
    outBuilder(type, "", P("HTTPSTATUS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::httpHeader(CmdType type) {
    outBuilder(type, "", P("HTTPHEAD"));
    print(ioBuffer);
}