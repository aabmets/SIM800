
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
void SIM800::callMeter(CmdType type, char* str) {
    outBuilder(type, str, P("CACM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::callMeterMax(CmdType type, char* str) {
    outBuilder(type, str, P("CAMM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::chargeAdvice(CmdType type, char* str) {
    outBuilder(type, str, P("CAOC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::dataCallService(CmdType type, char* str) {
    outBuilder(type, str, P("CBST"));
    print(ioBuffer);
}

// ============================================================
void SIM800::callForward(CmdType type, char* str) {
    outBuilder(type, str, P("CCFC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::callWait(CmdType type, char* str) {
    outBuilder(type, str, P("CCWA"));
    print(ioBuffer);
}

// ============================================================
void SIM800::errorReport(CmdType type, char* str) {
    outBuilder(type, str, P("CEER"));
    print(ioBuffer);
}

// ============================================================
void SIM800::reqMakerID(CmdType type) {
    outBuilder(type, "", P("CGMI"));
    print(ioBuffer);
}

// ============================================================
void SIM800::reqDeviceModelID(CmdType type) {
    outBuilder(type, "", P("CGMM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::reqSoftwareID(CmdType type) {
    outBuilder(type, "", P("CGMR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::reqIMEI(CmdType type) {
    outBuilder(type, "", P("CGSN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::charset(CmdType type, char* str) {
    outBuilder(type, str, P("CSCS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::addressType(CmdType type, char* str) {
    outBuilder(type, str, P("CSTA"));
    print(ioBuffer);
}

// ============================================================
void SIM800::callHold(CmdType type, char* str) {
    outBuilder(type, str, P("CHLD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::reqIMSI(CmdType type) {
    outBuilder(type, "", P("CIMI"));
    print(ioBuffer);
}

// ============================================================
void SIM800::activeCalls(CmdType type, char* str) {
    outBuilder(type, str, P("CLCC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::facilityLock(CmdType type, char* str) {
    outBuilder(type, str, P("CLCK"));
    print(ioBuffer);
}

// ============================================================
void SIM800::showCallerID(CmdType type, char* str) {
    outBuilder(type, str, P("CLIP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::hideSelfID(CmdType type, char* str) {
    outBuilder(type, str, P("CLIR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::deviceError(CmdType type, char* str) {
    outBuilder(type, str, P("CMEE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::callerID(CmdType type, char* str) {
    outBuilder(type, str, P("COLP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::netOps(CmdType type, char* str) {
    outBuilder(type, str, P("COPS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::activity(CmdType type) {
    outBuilder(type, "", P("CPAS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::pbFind(CmdType type, char* str) {
    outBuilder(type, str, P("CPBF"));
    print(ioBuffer);
}

// ============================================================
void SIM800::pbRead(CmdType type, char* str) {
    outBuilder(type, str, P("CPBR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::pbStorage(CmdType type, char* str) {
    outBuilder(type, str, P("CPBS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::pbWrite(CmdType type, char* str) {
    outBuilder(type, str, P("CPBW"));
    print(ioBuffer);
}

// ============================================================
void SIM800::pinCode(CmdType type, char* str) {
    outBuilder(type, str, P("CPIN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::changePwd(CmdType type, char* str) {
    outBuilder(type, str, P("CPWD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::serviceReport(CmdType type, char* str) {
    outBuilder(type, str, P("CR"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ringCodeMode(CmdType type, char* str) {
    outBuilder(type, str, P("CRC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::netReg(CmdType type, char* str) {
    outBuilder(type, str, P("CREG"));
    print(ioBuffer);
}

// ============================================================
void SIM800::radioLinkParams(CmdType type, char* str) {
    outBuilder(type, str, P("CRLP"));
    print(ioBuffer);
}

// ============================================================
void SIM800::simRawAccess(CmdType type, char* str) {
    outBuilder(type, str, P("CRSM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::signalQuality(CmdType type) {
    outBuilder(type, "", P("CSQ"));
    print(ioBuffer);
}

// ============================================================
void SIM800::dtmfDuration(CmdType type, char* str) {
    outBuilder(type, str, P("VTD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::dtmfPlay(CmdType type, char* str) {
    outBuilder(type, str, P("VTS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::muxControl(CmdType type, char* str) {
    outBuilder(type, str, P("CMUX"));
    print(ioBuffer);
}

// ============================================================
void SIM800::getSelfAddr(CmdType type) {
    outBuilder(type, "", P("CNUM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::prefOperators(CmdType type, char* str) {
    outBuilder(type, str, P("CPOL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::listAllOperators(CmdType type) {
    outBuilder(type, "", P("COPN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::deviceMode(CmdType type, char* str) {
    outBuilder(type, str, P("CFUN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::clock(CmdType type, char* str) {
    outBuilder(type, str, P("CCLK"));
    print(ioBuffer);
}

// ============================================================
void SIM800::simStrAccess(CmdType type, char* str) {
    outBuilder(type, str, P("CSIM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::alertMode(CmdType type, char* str) {
    outBuilder(type, str, P("CALM"));
    print(ioBuffer);
}

// ============================================================
void SIM800::alertSound(CmdType type, char* str) {
    outBuilder(type, str, P("CALS"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ringerVolume(CmdType type, char* str) {
    outBuilder(type, str, P("CRSL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::loudSpeakerVol(CmdType type, char* str) {
    outBuilder(type, str, P("CLVL"));
    print(ioBuffer);
}

// ============================================================
void SIM800::mute(CmdType type, char* str) {
    outBuilder(type, str, P("CMUT"));
    print(ioBuffer);
}

// ============================================================
void SIM800::pricePerUnit(CmdType type, char* str) {
    outBuilder(type, str, P("CPUC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::callMeterMaxEvent(CmdType type, char* str) {
    outBuilder(type, str, P("CCWE"));
    print(ioBuffer);
}

// ============================================================
void SIM800::battery(CmdType type) {
    outBuilder(type, "", P("CBC"));
    print(ioBuffer);
}

// ============================================================
void SIM800::usd(CmdType type, char* str) {
    outBuilder(type, str, P("CUSD"));
    print(ioBuffer);
}

// ============================================================
void SIM800::ssn(CmdType type, char* str) {
    outBuilder(type, str, P("CSSN"));
    print(ioBuffer);
}

// ============================================================
void SIM800::dtmfDetect(CmdType type, char* str) {
    outBuilder(type, str, P("DDET"));
    print(ioBuffer);
}