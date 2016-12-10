
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
████   ATcmd           Manpage        API Method   ████   Count: 9 commands
███████████████████████████████████████████████████████
*/
public:
    /* AT+HTTPINIT     256 */    void httpInit    (CmdType);
    /* AT+HTTPTERM     257 */    void httpEnd     (CmdType);
    /* AT+HTTPPARA     257 */    void httpParams  (CmdType, char* = "");
    /* AT+HTTPDATA     259 */    void httpData    (CmdType, char* = "");
    /* AT+HTTPACTION   259 */    void httpAction  (CmdType, char* = "");
    /* AT+HTTPREAD     261 */    void httpRead    (CmdType, char* = "");
    /* AT+HTTPSCONT    262 */    void httpSave    (CmdType);
    /* AT+HTTPSTATUS   263 */    void httpStatus  (CmdType);
    /* AT+HTTPHEAD     264 */    void httpHeader  (CmdType);