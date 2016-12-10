
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
████   ATcmd        Manpage        API Method   ████   Count: 11 commands
████████████████████████████████████████████████████
*/
public:
    /* AT+CGATT     208 */    void gprsAttach         (CmdType, char* = "");
    /* AT+CGDCONT   209 */    void gprsDefineContext  (CmdType, char* = "");
    /* AT+CGQMIN    210 */    void gprsMinQuality     (CmdType, char* = "");
    /* AT+CGQREQ    210 */    void gprsReqQuality     (CmdType, char* = "");
    /* AT+CGACT     213 */    void gprsEnactContext   (CmdType, char* = "");
    /* AT+CGDATA    214 */    void gprsDataState      (CmdType, char* = "");
    /* AT+CGPADDR   214 */    void gprsAddress        (CmdType, char* = "");
    /* AT+CGCLASS   215 */    void gprsStationClass   (CmdType, char* = "");
    /* AT+CGEREP    216 */    void gprsReportCtrl     (CmdType, char* = "");
    /* AT+CGREG     217 */    void gprsRegStatus      (CmdType, char* = "");
    /* AT+CGSMS     218 */    void gprsMsgService     (CmdType, char* = "");