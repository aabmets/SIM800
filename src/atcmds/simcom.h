
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
████████████████████████████████████████████████████████
████   ATcmd            Manpage        API Method   ████   Total: 84 commands
████████████████████████████████████████████████████████
*/
public:
    /* AT+SIDET         145 */    void sideToneGain        (CmdType, char* = "");
    /* AT+CPOWD         146 */    void powerOff            (char*);
    /* AT+SPIC          146 */    void pinCodeTriesLeft    ();
    /* AT+CMIC          146 */    void micGain             (CmdType, char* = "");
    /* AT+CALA          148 */    void alarmTime           (CmdType, char* = "");
    /* AT+CALD          149 */    void delAlarm            (CmdType, char* = "");
    /* AT+CADC          149 */    void readAdc             (CmdType);
    /* AT+CSNS          150 */    void singleNumScheme     (CmdType, char* = "");
    /* AT+CDSCB         151 */    void resetCellCast       ();
    /* AT+CMOD          151 */    void cfgAltModeCalls     (CmdType, char* = "");
    /* AT+CFGRI         151 */    void riPinUrc            (CmdType, char* = "");
    /* AT+CLTS          152 */    void timeStamp           (CmdType, char* = "");
    /* AT+CLDTMF        154 */    void dtmfLocalTone       (CmdType, char* = "");
    /* AT+CDRIND        155 */    void indicateCallEnd     (CmdType, char* = "");
    /* AT+CSPN          156 */    void serviceProvider     ();
    /* AT+CCVM          156 */    void voiceMail           (CmdType, char* = "");
    /* AT+CBAND         157 */    void opBand              (CmdType, char* = "");
    /* AT+CHF           158 */    void handsFree           (CmdType, char* = "");
    /* AT+CHFA          159 */    void swapAudio           (CmdType, char* = "");
    /* AT+CSCLK         160 */    void slowClock           (CmdType, char* = "");
    /* AT+CENG          161 */    void engMode             (CmdType, char* = "");
    /* AT+SCLASS0       163 */    void smsZeroToSIM        (CmdType, char* = "");
    /* AT+CCID          164 */    void simCardID           (CmdType);
    /* AT+CMTE          164 */    void temperature         (CmdType, char* = "");
    /* AT+CMGDA         165 */    void delAllMsg           (CmdType, char* = "");
    /* AT+STTONE        166 */    void stkPlayTone         (CmdType, char* = "");
    /* AT+SIMTONE       167 */    void toneGen             (CmdType, char* = "");
    /* AT+CCPD          168 */    void alphaString         (CmdType, char* = "");
    /* AT+CGID          168 */    void simGroupID          ();
    /* AT+MORING        169 */    void originCallState     (CmdType, char* = "");
    /* AT+CMGHEX        170 */    void smsHexMode          (CmdType, char* = "");
    /* AT+CCODE         170 */    void smsDeviceCompat     (CmdType, char* = "");
    /* AT+CIURC         171 */    void cfgInitUrc          (CmdType, char* = "");
    /* AT+CPSPWD        172 */    void setSuperPwd         (char*);
    /* AT+EXUNSOL       172 */    void signalQualityURC    (CmdType, char* = "");
    /* AT+CGMSCLASS     173 */    void gprsMultiClass      (CmdType, char* = "");
    /* AT+CDEVICE       174 */    void getFlashMem         ();
    /* AT+CCALR         174 */    void queryCallReady      (CmdType);
    /* AT+GSV           174 */    void getPII              ();
    /* AT+SGPIO         175 */    void gpioCtrl            (CmdType, char* = "");
    /* AT+SPWM          176 */    void pwmGen              (CmdType, char* = "");
    /* AT+ECHO          176 */    void echoCtrl            (CmdType, char* = "");
    /* AT+CAAS          177 */    void autoAudioSwitch     (CmdType, char* = "");
    /* AT+SVR           178 */    void voiceEncoderCtrl    (CmdType, char* = "");
    /* AT+GSMBUSY       179 */    void gsmBusy             (CmdType, char* = "");
    /* AT+CEMNL         180 */    void emergencyNumList    (CmdType, char* = "");
    /* AT*CELLLOCK      181 */    void arfcnLock           (CmdType, char* = "");
    /* AT+SLEDS         182 */    void netLightPeriod      (CmdType, char* = "");
    /* AT+CBUZZERRING   183 */    void buzzerRingtone      (CmdType, char* = "");
    /* AT+CEXTERNTONE   183 */    void micCtrl             (CmdType, char* = "");
    /* AT+CNETLIGHT     184 */    void netLight            (CmdType, char* = "");
    /* AT+CWHITELIST    185 */    void whiteList           (CmdType, char* = "");
    /* AT+CSDT          186 */    void detectSimCard       (CmdType, char* = "");
    /* AT+CSMINS        186 */    void simPresent          (CmdType, char* = "");
    /* AT+CSGS          187 */    void gprsNetLight        (CmdType, char* = "");
    /* AT+CMICBIAS      188 */    void micBias             (CmdType, char* = "");
    /* AT+DTAM          189 */    void playAudioIntoCall   (CmdType, char* = "");
    /* AT+SJDR          189 */    void detectJamming       (CmdType, char* = "");
    /* AT+CPCMCFG       191 */    void pcmCfg              (CmdType, char* = "");
    /* AT+CPCMSYNC      192 */    void pcmSyncParam        (CmdType, char* = "");
    /* AT+CANT          193 */    void detectAntenna       (CmdType, char* = "");
    /* AT+CAGCSET       194 */    void agcCfg              (CmdType, char* = "");
    /* AT+SD2PCM        194 */    void pcmSwitchSD         (CmdType, char* = "");
    /* AT+SKPD          194 */    void detectKeypad        (CmdType, char* = "");
    /* AT+SIMTONEX      196 */    void toneStringGen       (CmdType, char* = "");
    /* AT+CROAMING      197 */    void roamingState        ();
    /* AT+CNETSCAN      197 */    void netScan             (CmdType, char* = "");
    /* AT+CMNRP         198 */    void dualSerialPort      (CmdType, char* = "");
    /* AT+CEGPRS        199 */    void edgeCfg             (CmdType, char* = "");
    /* AT+CGPIO         200 */    void gpioIndex           (CmdType, char* = "");
    /* AT+CMEDPLAY      201 */    void playAudio           (CmdType, char* = "");
    /* AT+CMEDIAVOL     202 */    void audioVolume         (CmdType, char* = "");
    /* AT+SNDLEVEL      202 */    void atcmdSoundLevel     (CmdType, char* = "");
    /* AT+ECHARGE       203 */    void chargeCtrl          (CmdType, char* = "");
    /* AT+SIMTIMER      204 */    void simPollInterval     (CmdType, char* = "");
    /* AT+SPE           204 */    void enhanceSpeech       (CmdType, char* = "");
    /* AT+CCONCINDEX    205 */    void getConcatMsgIndex   (CmdType);
    /* AT+SDMODE        205 */    void sdModeSwitch        (CmdType, char* = "");
    /* AT+SRSPT         206 */    void smsResendCtrl       (CmdType, char* = "");
    /* AT+CREC          335 */    void record              (CmdType, char* = "");
    /* AT+CRECORD       338 */    void recordToUart        (CmdType, char* = "");
    /* AT+CTTS          340 */    void textToSpeech        (CmdType, char* = "");
    /* AT+CTTSPARAM     341 */    void textToSpeechCfg     (CmdType, char* = "");
    /* AT+CTTSRING      342 */    void textToSpeechRing    (CmdType, char* = "");