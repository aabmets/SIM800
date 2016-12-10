
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
void SIM800::stkReply(CmdType type, char* str) {
    outBuilder(type, str, P("STKTRS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::stkEnvelope(CmdType type, char* str) {
    outBuilder(type, str, P("STKENVS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::stkCallSetup(CmdType type, char* str) {
    outBuilder(type, str, P("STKCALL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::stkSms(CmdType type, char* str) {
    outBuilder(type, str, P("STKSMS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::stkSetupSS(CmdType type, char* str) {
    outBuilder(type, str, P("STKSS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::stkSetupUSSD(CmdType type, char* str) {
    outBuilder(type, str, P("STKUSSD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::stkSendDTMF(CmdType type, char* str) {
    outBuilder(type, str, P("STKDTMF"));
    print(ioBuffer);
}

// ============================================================
void SIM800::stkMenu(CmdType type, char* str) {
    outBuilder(type, str, P("STKMENU"));
    print(ioBuffer);
}

// ============================================================
void SIM800::stkSetURC(CmdType type, char* str) {
    outBuilder(type, str, P("STKPCIS"));
    print(ioBuffer);
}