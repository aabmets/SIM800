
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
████   ATcmd      Manpage       API Method   ████   Count: 41 commands
█████████████████████████████████████████████████
*/
public:
    /* AT         -  */    void test                ();
    /* A/         28 */    void repeatLastCmd       ();
    /* ATA        28 */    void answerCall          ();
    /* ATD        29 */    void originCall          (char*);
    /* ATDL       34 */    void redialLastAddr      ();
    /* ATE        35 */    void setCmdEcho          (char*);
    /* ATH        35 */    void endCall             ();
    /* ATI        35 */    void getDeviceID         ();
    /* ATL        36 */    void monSpeakerVol       (char*);
    /* ATM        36 */    void monSpeakerMode      (char*);
    /* +++        36 */    void toCmdMode           ();
    /* ATO        37 */    void toDataMode          ();
    /* ATP        37 */    void pulseDialing        ();
    /* ATQ        38 */    void setResultMode       (char*);
    /* ATS0       38 */    void autoAnswerAfter     (CmdType, char* = "");
    /* ATS3       39 */    void cmdlnEndChar        ();
    /* ATS4       39 */    void cmdlnFormatChar     ();
    /* ATS5       40 */    void cmdlnEditChar       ();
    /* ATS6       41 */    void blindDialPause      (CmdType, char* = "");
    /* ATS7       41 */    void connWaitTime        (CmdType, char* = "");
    /* ATS8       42 */    void commaWaitTime       (CmdType, char* = "");
    /* ATS10      42 */    void carrierLostDelay    (CmdType, char* = "");
    /* ATT        43 */    void toneDialing         ();
    /* ATV        43 */    void setResponseFormat   (char*);
    /* ATX        44 */    void setCallMonitor      (char*);
    /* ATZ        45 */    void userReset           ();
    /* AT&C       45 */    void setDcdMode          (char*);
    /* AT&D       46 */    void setDtrMode          (char*);
    /* AT&F       46 */    void factoryReset        ();
    /* AT&V       47 */    void getActiveCfg        ();
    /* AT&W       47 */    void saveActiveCfg       ();
    /* AT+GCAP    49 */    void getGsmSupport       ();
    /* AT+GMI     49 */    void getMakerID          (CmdType);
    /* AT+GMM     50 */    void getDeviceModelID    (CmdType);
    /* AT+GMR     50 */    void getSoftwareID       (CmdType);
    /* AT+GOI     51 */    void getGOI              (CmdType);
    /* AT+GSN     51 */    void getIMEI             (CmdType);
    /* AT+ICF     52 */    void serialFraming       (CmdType, char* = "");
    /* AT+IFC     53 */    void serialFlowCtrl      (CmdType, char* = "");
    /* AT+IPR     54 */    void serialBauds         (CmdType, char* = "");
    /* AT+HVOIC   55 */    void endCallOnly         ();