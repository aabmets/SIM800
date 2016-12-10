
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
████████████████████████████████████████████████████
████   ATcmd        Manpage        API Method   ████   Count: 9 commands
████████████████████████████████████████████████████
*/
public:
    /* AT+STKTRS    135 */    void stkReply      (CmdType, char* = "");
    /* AT+STKENVS   136 */    void stkEnvelope   (CmdType, char* = "");
    /* AT+STKCALL   137 */    void stkCallSetup  (CmdType, char* = "");
    /* AT+STKSMS    138 */    void stkSms        (CmdType, char* = "");
    /* AT+STKSS     138 */    void stkSetupSS    (CmdType, char* = "");
    /* AT+STKUSSD   139 */    void stkSetupUSSD  (CmdType, char* = "");
    /* AT+STKDTMF   139 */    void stkSendDTMF   (CmdType, char* = "");
    /* AT+STKMENU   141 */    void stkMenu       (CmdType, char* = "");
    /* AT+STKPCIS   141 */    void stkSetURC     (CmdType, char* = "");