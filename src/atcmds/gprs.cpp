
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
void SIM800::gprsAttach(CmdType type, char* str) {
    outBuilder(type, str, P("CGATT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsDefineContext(CmdType type, char* str) {
    outBuilder(type, str, P("CGDCONT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsMinQuality(CmdType type, char* str) {
    outBuilder(type, str, P("CGQMIN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsReqQuality(CmdType type, char* str) {
    outBuilder(type, str, P("CGQREQ"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsEnactContext(CmdType type, char* str) {
    outBuilder(type, str, P("CGACT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsDataState(CmdType type, char* str) {
    outBuilder(type, str, P("CGDATA"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsAddress(CmdType type, char* str) {
    outBuilder(type, str, P("CGPADDR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsStationClass(CmdType type, char* str) {
    outBuilder(type, str, P("CGCLASS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsReportCtrl(CmdType type, char* str) {
    outBuilder(type, str, P("CGEREP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsRegStatus(CmdType type, char* str) {
    outBuilder(type, str, P("CGREG"));
    print(ioBuffer);
}

// ============================================================
void SIM800::gprsMsgService(CmdType type, char* str) {
    outBuilder(type, str, P("CGSMS"));
    print(ioBuffer);
}