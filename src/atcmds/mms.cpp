
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
void SIM800::mmsCenterUrl(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSCURL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsProxy(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSPROTO"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsNetwork(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSCID"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsCfgSend(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSSENDCFG"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsEdit(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSEDIT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsDownFile(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSDOWN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsDelFile(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSDELFILE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsSend(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSSEND"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsAddRecp(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSRECP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsAddCopyRecp(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSCC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsAddBccRecp(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSBCC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsDelRecp(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSDELRECP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsDelCopyRecp(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSDELCC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsDelBccRecp(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSDELBCC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsGet(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSRECV"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsDetails(CmdType type) {
    outBuilder(type, "", P("CMMSVIEW"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsRead(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSREAD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsReadPush(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSRDPUSH"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsUserAgent(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSUA"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsUserProfile(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSPROFILE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsTimeout(CmdType type, char* str) {
    outBuilder(type, str, P("CMMSTIMEOUT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsStatus(CmdType type) {
    outBuilder(type, "", P("CMMSSTATUS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsBegin(CmdType type) {
    outBuilder(type, "", P("CMMSINIT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsEnd(CmdType type) {
    outBuilder(type, "", P("CMMSTERM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mmsSaveCfg(CmdType type) {
    outBuilder(type, "", P("CMMSSCONT"));
    print(ioBuffer);
}