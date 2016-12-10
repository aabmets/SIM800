
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
███████████████████████████████████████████████████████
████   ATcmd           Manpage        API Method   ████   Count: 36 commands
███████████████████████████████████████████████████████
*/
public:
    /* AT+CIPMUX       221 */    void ipMultiConn      (CmdType, char* = "");
    /* AT+CIPSTART     221 */    void ipOpen           (CmdType, char* = "");
    /* AT+CIPSEND      223 */    void ipSend           (CmdType, char* = "");
    /* AT+CIPQSEND     225 */    void ipQuicksend      (CmdType, char* = "");
    /* AT+CIPACK       226 */    void ipAck            (CmdType, char* = "");
    /* AT+CIPCLOSE     227 */    void ipClose          (CmdType, char* = "");
    /* AT+CIPSHUT      227 */    void ipDeactivate     (CmdType);
    /* AT+CLPORT       228 */    void ipPort           (CmdType, char* = "");
    /* AT+CSTT         229 */    void ipAccess         (CmdType, char* = "");
    /* AT+CIICR        230 */    void ipBegin          (CmdType);
    /* AT+CIFSR        230 */    void ipGetLocalAddr   (CmdType);
    /* AT+CIPSTATUS    231 */    void ipStatus         (CmdType, char* = "");
    /* AT+CDNSCFG      232 */    void ipDnsCfg         (CmdType, char* = "");
    /* AT+CDNSGIP      233 */    void ipGetNameAddr    (CmdType, char* = "");
    /* AT+CIPHEAD      234 */    void ipAddHead        (CmdType, char* = "");
    /* AT+CIPATS       234 */    void ipAutoSendTimer  (CmdType, char* = "");
    /* AT+CIPSPRT      235 */    void ipSendPrompt     (CmdType, char* = "");
    /* AT+CIPSERVER    236 */    void ipServer         (CmdType, char* = "");
    /* AT+CIPCSGP      237 */    void ipConnMode       (CmdType, char* = "");
    /* AT+CIPSRIP      238 */    void ipShowRemoteID   (CmdType, char* = "");
    /* AT+CIPDPDP      239 */    void ipNetTiming      (CmdType, char* = "");
    /* AT+CIPMODE      239 */    void ipAppMode        (CmdType, char* = "");
    /* AT+CIPCCFG      240 */    void ipTransferCfg    (CmdType, char* = "");
    /* AT+CIPSHOWTP    241 */    void ipShowProtocol   (CmdType, char* = "");
    /* AT+CIPUDPMODE   242 */    void ipUdpMode        (CmdType, char* = "");
    /* AT+CIPRXGET     243 */    void ipManualData     (CmdType, char* = "");
    /* AT+CIPSCONT     245 */    void ipSaveCfg        (CmdType);
    /* AT+CIPRDTIMER   246 */    void ipRemoteTimer    (CmdType, char* = "");
    /* AT+CIPSGTXT     247 */    void ipMultiPdpCfg    (CmdType, char* = "");
    /* AT+CIPTKA       248 */    void ipKeepAlive      (CmdType, char* = "");
    /* AT+SAPBR        249 */    void ipBearer         (CmdType, char* = "");
    /* AT+CIPPING      251 */    void ipPing           (CmdType, char* = "");
    /* AT+CIPCTL       252 */    void ipEchoReply      (CmdType, char* = "");
    /* AT+CIPFLT       253 */    void ipFilter         (CmdType, char* = "");
    /* AT+CIPBEIPING   254 */    void ipAnswerPings    (CmdType, char* = "");
    /* AT+CIPGSMLOC    288 */    void ipGsmLoc         (CmdType, char* = "");

private:
    void ipHelper(char *);