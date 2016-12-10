
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
void SIM800::test() {
    outBuilder(EXE, "", P("AT"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::repeatLastCmd() {
    outBuilder(EXE, "", P("A/"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::answerCall() {
    outBuilder(EXE, "", P("ATA"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::originCall(char* str) {
    outBuilder(EXE, str, P("ATD"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::redialLastAddr() {
    outBuilder(EXE, "", P("ATDL"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::setCmdEcho(char* str) {
    outBuilder(EXE, str, P("ATE"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::endCall() {
    outBuilder(EXE, "", P("ATH"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::getDeviceID() {
    outBuilder(EXE, "", P("ATI"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::monSpeakerVol(char* str) {
    outBuilder(EXE, str, P("ATL"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::monSpeakerMode(char* str) {
    outBuilder(EXE, str, P("ATM"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::toCmdMode() {
    outBuilder(EXE, "", P("+++"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::toDataMode() {
    outBuilder(EXE, "", P("ATO0"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::pulseDialing() {
    outBuilder(EXE, "", P("ATP"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::setResultMode(char* str) {
    outBuilder(EXE, str, P("ATQ"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::autoAnswerAfter(CmdType type, char* str) {
    outBuilder(type, str, P("ATS0"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::cmdlnEndChar() {
    outBuilder(GET, "", P("ATS3"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::cmdlnFormatChar() {
    outBuilder(GET, "", P("ATS4"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::cmdlnEditChar() {
    outBuilder(GET, "", P("ATS5"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::blindDialPause(CmdType type, char* str) {
    outBuilder(type, str, P("ATS6"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::connWaitTime(CmdType type, char* str) {
    outBuilder(type, str, P("ATS7"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::commaWaitTime(CmdType type, char* str) {
    outBuilder(type, str, P("ATS8"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::carrierLostDelay(CmdType type, char* str) {
    outBuilder(type, str, P("ATS10"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::toneDialing() {
    outBuilder(EXE, "", P("ATT"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::setResponseFormat(char* str) {
    outBuilder(EXE, str, P("ATV"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::setCallMonitor(char* str) {
    outBuilder(EXE, str, P("ATX"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::userReset() {
    outBuilder(EXE, "", P("ATZ0"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::setDcdMode(char* str) {
    outBuilder(EXE, str, P("AT&C"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::setDtrMode(char* str) {
    outBuilder(EXE, str, P("AT&D"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::factoryReset() {
    outBuilder(EXE, "", P("AT&F0"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::getActiveCfg() {
    outBuilder(EXE, "", P("AT&V0"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::saveActiveCfg() {
    outBuilder(EXE, "", P("AT&W0"), false);
    print(ioBuffer);
}

// ============================================================
void SIM800::getGsmSupport() {
    outBuilder(EXE, "", P("GCAP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::getMakerID(CmdType type) {
    outBuilder(type, "", P("GMI"));
    print(ioBuffer);
}

// ============================================================
void SIM800::getDeviceModelID(CmdType type) {
    outBuilder(type, "", P("GMM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::getSoftwareID(CmdType type) {
    outBuilder(type, "", P("GMR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::getGOI(CmdType type) {
    outBuilder(type, "", P("GOI"));
    print(ioBuffer);
}

// ============================================================
void SIM800::getIMEI(CmdType type) {
    outBuilder(type, "", P("GSN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::serialFraming(CmdType type, char* str) {
    outBuilder(type, str, P("ICF"));
    print(ioBuffer);
}

// ============================================================
void SIM800::serialFlowCtrl(CmdType type, char* str) {
    outBuilder(type, str, P("IFC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::serialBauds(CmdType type, char* str) {
    outBuilder(type, str, P("IPR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::endCallOnly() {
    outBuilder(EXE, "", P("HVOIC"));
    print(ioBuffer);
}