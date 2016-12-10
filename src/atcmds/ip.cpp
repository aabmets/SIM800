
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
void SIM800::ipMultiConn(CmdType type, char* str) {
    outBuilder(type, str, P("CIPMUX"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipOpen(CmdType type, char* str) {
    outBuilder(type, str, P("CIPSTART"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipSend(CmdType type, char* data) {
    outBuilder(type, "", P("CIPSEND"));
    type == EXE ? ipHelper(data) : print(ioBuffer);
}

// ============================================================
void SIM800::ipQuicksend(CmdType type, char* str) {
    outBuilder(type, str, P("CIPQSEND"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipAck(CmdType type, char* str) {
    outBuilder(type, str, P("CIPACK"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipClose(CmdType type, char* str) {
    outBuilder(type, str, P("CIPCLOSE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipDeactivate(CmdType type) {
    outBuilder(type, "", P("CIPSHUT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipPort(CmdType type, char* str) {
    outBuilder(type, str, P("CLPORT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipAccess(CmdType type, char* str) {
    outBuilder(type, str, P("CSTT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipBegin(CmdType type) {
    outBuilder(type, "", P("CIICR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipGetLocalAddr(CmdType type) {
    outBuilder(type, "", P("CIFSR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipStatus(CmdType type, char* str) {
    outBuilder(type, str, P("CIPSTATUS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipDnsCfg(CmdType type, char* str) {
    outBuilder(type, str, P("CDNSCFG"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipGetNameAddr(CmdType type, char* str) {
    outBuilder(type, str, P("CDNSGIP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipAddHead(CmdType type, char* str) {
    outBuilder(type, str, P("CIPHEAD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipAutoSendTimer(CmdType type, char* str) {
    outBuilder(type, str, P("CIPATS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipSendPrompt(CmdType type, char* str) {
    outBuilder(type, str, P("CIPSPRT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipServer(CmdType type, char* str) {
    outBuilder(type, str, P("CIPSERVER"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipConnMode(CmdType type, char* str) {
    outBuilder(type, str, P("CIPCSGP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipShowRemoteID(CmdType type, char* str) {
    outBuilder(type, str, P("CIPSRIP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipNetTiming(CmdType type, char* str) {
    outBuilder(type, str, P("CIPDPDP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipAppMode(CmdType type, char* str) {
    outBuilder(type, str, P("CIPMODE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipTransferCfg(CmdType type, char* str) {
    outBuilder(type, str, P("CIPCCFG"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipShowProtocol(CmdType type, char* str) {
    outBuilder(type, str, P("CIPSHOWTP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipUdpMode(CmdType type, char* str) {
    outBuilder(type, str, P("CIPUDPMODE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipManualData(CmdType type, char* str) {
    outBuilder(type, str, P("CIPRXGET"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipSaveCfg(CmdType type) {
    outBuilder(type, "", P("CIPSCONT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipRemoteTimer(CmdType type, char* str) {
    outBuilder(type, str, P("CIPRDTIMER"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipMultiPdpCfg(CmdType type, char* str) {
    outBuilder(type, str, P("CIPSGTXT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipKeepAlive(CmdType type, char* str) {
    outBuilder(type, str, P("CIPTKA"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipBearer(CmdType type, char* str) {
    outBuilder(type, str, P("SAPBR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipPing(CmdType type, char* str) {
    outBuilder(type, str, P("CIPPING"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipEchoReply(CmdType type, char* str) {
    outBuilder(type, str, P("CIPCTL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipFilter(CmdType type, char* str) {
    outBuilder(type, str, P("CIPFLT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipAnswerPings(CmdType type, char* str) {
    outBuilder(type, str, P("CIPBEIPING"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ipGsmLoc(CmdType type, char* str) {
    outBuilder(type, str, P("CIPGSMLOC"));
    print(ioBuffer);
}



// ============================================================
void SIM800::ipHelper(char* data) {
    write(ioBuffer);
    delay(100);
    outBuilder(EXE, data, "", false);
    strcat_P(ioBuffer, P("\x1A"));
    overrideTimeout(10000);
    print(ioBuffer);
}
