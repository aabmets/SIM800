
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
void SIM800::mailBearerID(CmdType type, char* str) {
    outBuilder(type, str, P("EMAILCID"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mailTimeout(CmdType type, char* str) {
    outBuilder(type, str, P("EMAILTO"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpServer(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPSRV"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpAuth(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPAUTH"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpFrom(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPFROM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpTo(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPRCPT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpSubject(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPSUB"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpBody(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPBODY"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpFile(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPFILE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpSend(CmdType type) {
    outBuilder(type, "", P("SMTPSEND"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpFilesend(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPFT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::smtpCharset(CmdType type, char* str) {
    outBuilder(type, str, P("SMTPCS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popCfg(CmdType type, char* str) {
    outBuilder(type, str, P("POP3SRV"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popLogin(CmdType type) {
    outBuilder(type, "", P("POP3IN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popInbox(CmdType type) {
    outBuilder(type, "", P("POP3NUM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popMailSize(CmdType type, char* str) {
    outBuilder(type, str, P("POP3LIST"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popMailUID(CmdType type, char* str) {
    outBuilder(type, str, P("POP3UIDL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popMultiGet(CmdType type, char* str) {
    outBuilder(type, str, P("POP3CMD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popMultiRead(CmdType type, char* str) {
    outBuilder(type, str, P("POP3READ"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popMarkDel(CmdType type, char* str) {
    outBuilder(type, str, P("POP3DEL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popUnmarkDel(CmdType type) {
    outBuilder(type, "", P("POP3RSET"));
    print(ioBuffer);
}

// ============================================================
void SIM800::popLogout(CmdType type) {
    outBuilder(type, "", P("POP3OUT"));
    print(ioBuffer);
}