
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

/*
█████████████████████████████████████████████████
████   ATcmd      Manpage       API Method   ████   Count: 55 commands
█████████████████████████████████████████████████
*/
public:
    /* AT+CACM    57 */    void callMeter          (CmdType, char* = "");
    /* AT+CAMM    58 */    void callMeterMax       (CmdType, char* = "");
    /* AT+CAOC    59 */    void chargeAdvice       (CmdType, char* = "");
    /* AT+CBST    60 */    void dataCallService    (CmdType, char* = "");
    /* AT+CCFC    61 */    void callForward        (CmdType, char* = "");
    /* AT+CCWA    63 */    void callWait           (CmdType, char* = "");
    /* AT+CEER    64 */    void errorReport        (CmdType, char* = "");
    /* AT+CGMI    67 */    void reqMakerID         (CmdType);
    /* AT+CGMM    67 */    void reqDeviceModelID   (CmdType);
    /* AT+CGMR    68 */    void reqSoftwareID      (CmdType);
    /* AT+CGSN    68 */    void reqIMEI            (CmdType);
    /* AT+CSCS    69 */    void charset            (CmdType, char* = "");
    /* AT+CSTA    70 */    void addressType        (CmdType, char* = "");
    /* AT+CHLD    70 */    void callHold           (CmdType, char* = "");
    /* AT+CIMI    71 */    void reqIMSI            (CmdType);
    /* AT+CLCC    72 */    void activeCalls        (CmdType, char* = "");
    /* AT+CLCK    73 */    void facilityLock       (CmdType, char* = "");
    /* AT+CLIP    75 */    void showCallerID       (CmdType, char* = "");
    /* AT+CLIR    76 */    void hideSelfID         (CmdType, char* = "");
    /* AT+CMEE    77 */    void deviceError        (CmdType, char* = "");
    /* AT+COLP    78 */    void callerID           (CmdType, char* = "");
    /* AT+COPS    80 */    void netOps             (CmdType, char* = "");
    /* AT+CPAS    81 */    void activity           (CmdType);
    /* AT+CPBF    82 */    void pbFind             (CmdType, char* = "");
    /* AT+CPBR    83 */    void pbRead             (CmdType, char* = "");
    /* AT+CPBS    84 */    void pbStorage          (CmdType, char* = "");
    /* AT+CPBW    85 */    void pbWrite            (CmdType, char* = "");
    /* AT+CPIN    86 */    void pinCode            (CmdType, char* = "");
    /* AT+CPWD    87 */    void changePwd          (CmdType, char* = "");
    /* AT+CR      88 */    void serviceReport      (CmdType, char* = "");
    /* AT+CRC     89 */    void ringCodeMode       (CmdType, char* = "");
    /* AT+CREG    90 */    void netReg             (CmdType, char* = "");
    /* AT+CRLP    92 */    void radioLinkParams    (CmdType, char* = "");
    /* AT+CRSM    92 */    void simRawAccess       (CmdType, char* = "");
    /* AT+CSQ     93 */    void signalQuality      (CmdType);
    /* AT+VTD     94 */    void dtmfDuration       (CmdType, char* = "");
    /* AT+VTS     95 */    void dtmfPlay           (CmdType, char* = "");
    /* AT+CMUX    96 */    void muxControl         (CmdType, char* = "");
    /* AT+CNUM    97 */    void getSelfAddr        (CmdType);
    /* AT+CPOL    98 */    void prefOperators      (CmdType, char* = "");
    /* AT+COPN    99 */    void listAllOperators   (CmdType);
    /* AT+CFUN   100 */    void deviceMode         (CmdType, char* = "");
    /* AT+CCLK   101 */    void clock              (CmdType, char* = "");
    /* AT+CSIM   101 */    void simStrAccess       (CmdType, char* = "");
    /* AT+CALM   102 */    void alertMode          (CmdType, char* = "");
    /* AT+CALS   103 */    void alertSound         (CmdType, char* = "");
    /* AT+CRSL   104 */    void ringerVolume       (CmdType, char* = "");
    /* AT+CLVL   104 */    void loudSpeakerVol     (CmdType, char* = "");
    /* AT+CMUT   105 */    void mute               (CmdType, char* = "");
    /* AT+CPUC   106 */    void pricePerUnit       (CmdType, char* = "");
    /* AT+CCWE   107 */    void callMeterMaxEvent  (CmdType, char* = "");
    /* AT+CBC    108 */    void battery            (CmdType);
    /* AT+CUSD   108 */    void usd                (CmdType, char* = "");
    /* AT+CSSN   109 */    void ssn                (CmdType, char* = "");
    /* AT+DDET   333 */    void dtmfDetect         (CmdType, char* = ""); 