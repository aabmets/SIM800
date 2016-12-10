
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
void SIM800::smsDel(CmdType type, char* str) {
    outBuilder(type, str, P("CMGD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsFormat(CmdType type, char* str) {
    outBuilder(type, str, P("CMGF"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsList(CmdType type, char* str) {
    outBuilder(type, str, P("CMGL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsRead(CmdType type, char* str) {
    outBuilder(type, str, P("CMGR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsSend(char* addr_len, char* txt_pdu) {
    outBuilder(EXE, addr_len, P("AT+CMGS="), false);
    smsHelper(txt_pdu);
}

// ============================================================
void SIM800::smsWriteToStore(char* addr_len, char* txt_pdu) {
    outBuilder(EXE, addr_len, P("AT+CMGW="), false);
    smsHelper(txt_pdu);
}

// ============================================================
void SIM800::smsSendFromStore(CmdType type, char* str) {
    outBuilder(type, str, P("CMSS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsNotifyNew(CmdType type, char* str) {
    outBuilder(type, str, P("CNMI"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsStorage(CmdType type, char* str) {
    outBuilder(type, str, P("CPMS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsRestoreCfg(CmdType type, char* str) {
    outBuilder(type, str, P("CRES"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsSaveCfg(CmdType type, char* str) {
    outBuilder(type, str, P("CSAS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsCenterAddress(CmdType type, char* str) {
    outBuilder(type, str, P("CSCA"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsCellCast(CmdType type, char* str) {
    outBuilder(type, str, P("CSCB"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsGetParams(CmdType type, char* str) {
    outBuilder(type, str, P("CSDH"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsSetParams(CmdType type, char* str) {
    outBuilder(type, str, P("CSMP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smsService(CmdType type, char* str) {
    outBuilder(type, str, P("CSMS"));
    print(ioBuffer);
}


// ============================================================
void SIM800::smsHelper(char* txt_pdu) {
    strcat_P(ioBuffer, P("\r"));
    write(ioBuffer);
    delay(100);
    outBuilder(EXE, txt_pdu, "", false);
    strcat_P(ioBuffer, P("\x1A"));
    overrideTimeout(10000);
    print(ioBuffer);
}
