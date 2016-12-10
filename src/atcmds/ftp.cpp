
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
void SIM800::ftpPort(CmdType type, char* str) {
    outBuilder(type, str, P("FTPPORT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpMode(CmdType type, char* str) {
    outBuilder(type, str, P("FTPMODE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpDataType(CmdType type, char* str) {
    outBuilder(type, str, P("FTPTYPE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpPutMode(CmdType type, char* str) {
    outBuilder(type, str, P("FTPPUTOPT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpBearerID(CmdType type, char* str) {
    outBuilder(type, str, P("FTPCID"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpResume(CmdType type, char* str) {
    outBuilder(type, str, P("FTPREST"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpServerAddr(CmdType type, char* str) {
    outBuilder(type, str, P("FTPSERV"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpUsername(CmdType type, char* str) {
    outBuilder(type, str, P("FTPUN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpPassword(CmdType type, char* str) {
    outBuilder(type, str, P("FTPPW"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpDownName(CmdType type, char* str) {
    outBuilder(type, str, P("FTPGETNAME"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpDownPath(CmdType type, char* str) {
    outBuilder(type, str, P("FTPGETPATH"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpUpName(CmdType type, char* str) {
    outBuilder(type, str, P("FTPPUTNAME"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpUpPath(CmdType type, char* str) {
    outBuilder(type, str, P("FTPPUTPATH"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpGetFile(CmdType type, char* str) {
    outBuilder(type, str, P("FTPGET"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpPutFile(CmdType type, char* str) {
    outBuilder(type, str, P("FTPPUT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpSaveCfg(CmdType type) {
    outBuilder(type, "", P("FTPSCONT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpDelFile(CmdType type) {
    outBuilder(type, "", P("FTPDELE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpFileSize(CmdType type) {
    outBuilder(type, "", P("FTPSIZE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpState(CmdType type) {
    outBuilder(type, "", P("FTPSTATE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpExtPutfile(CmdType type, char* str) {
    outBuilder(type, str, P("FTPEXTPUT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpMakeDir(CmdType type) {
    outBuilder(type, "", P("FTPMKD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpDelDir(CmdType type) {
    outBuilder(type, "", P("FTPRMD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpListFiles(CmdType type, char* str) {
    outBuilder(type, str, P("FTPLIST"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpGetToFS(CmdType type, char* str) {
    outBuilder(type, str, P("FTPGETTOFS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpPutFromFS(CmdType type, char* str) {
    outBuilder(type, str, P("FTPPUTFRMFS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpExtGetfile(CmdType type, char* str) {
    outBuilder(type, str, P("FTPEXTGET"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpPutFromRAM(CmdType type, char* str) {
    outBuilder(type, str, P("FTPFILEPUT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ftpQuit(CmdType type) {
    outBuilder(type, "", P("FTPQUIT"));
    print(ioBuffer);
}