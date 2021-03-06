#ifndef LANGUAGE_RU_H
#define LANGUAGE_RU_H

#include <avr/pgmspace.h>

const char RU_SCREEN_EMERGENCY_TITLE[] PROGMEM          = "A""\xd2""""\xd0""""\xe0""""\xd8""""\xd9""""\xdd"". ""\xde""""\xe1""""\xe2""""\xd0""""\xdd"". ""\xd2""""\xda""""\xdb"".";
const char RU_SCREEN_EMERGENCY_TEXT[] PROGMEM           = """\xc3""""\xd4""""\xd5""""\xe0""""\xd6""""\xd8""""\xd2""""\xd0""""\xe2""""\xec"" ""\xd4""""\xdb""""\xef"" ""\xe0""""\xd0""""\xd7""""\xd1""""\xdb""""\xde""""\xda"". ""\xdf""""\xe0""""\xd8""""\xdd""""\xe2""""\xd5""""\xe0""""\xd0""";
const char RU_SCREEN_EMERGENCY_BOX[] PROGMEM            = """\xb7""""\xd0""""\xd1""""\xdb""""\xde""""\xda""""\xd8""""\xe0""""\xde""""\xd2"".";
const char RU_SCREEN_SD_LIST_TITLE[] PROGMEM            = """\xbf""""\xd5""""\xe7""""\xd0""""\xe2""""\xd0""""\xe2""""\xec"" ""\xe1"" SD";
const char RU_SCREEN_SD_LIST_CONFIRM[] PROGMEM          = """\xbf""""\xd5""""\xe7""""\xd0""""\xe2""""\xd0""""\xe2""""\xec"" ""\xd0""""\xe0""""\xe5""""\xd8""""\xd2""?";
const char RU_SCREEN_SD_LIST_BACK[] PROGMEM             = """\xb2""""\xde""""\xd7""""\xd2""""\xe0""""\xd0""""\xe2"" ""\xd2"" ""\xdc""""\xd5""""\xdd""""\xee""";
const char RU_SCREEN_SD_LIST_PREV[] PROGMEM             = """\xbf""""\xe0""""\xd5""""\xd4""""\xeb""""\xd4""""\xe3""""\xe9""""\xd0""""\xef"" ""\xdf""""\xd0""""\xdf""""\xda""""\xd0""";
const char RU_SCREEN_UNLOAD_INIT_TITLE[] PROGMEM        = """\xc3""""\xd4""""\xd0""""\xdb""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_UNLOAD_INIT_TEXT[] PROGMEM         = """\xbd""""\xd0""""\xe7""""\xd0""""\xe2""""\xec"" ""\xdf""""\xe0""""\xde""""\xe6""""\xd5""""\xe1""""\xe1""?";
const char RU_SCREEN_UNLOAD_HOME_TITLE[] PROGMEM        = """\xc3""""\xd4""""\xd0""""\xdb""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_UNLOAD_HOME_TEXT[] PROGMEM         = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_UNLOAD_SELECT_TITLE[] PROGMEM      = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_UNLOAD_HEATING_TITLE[] PROGMEM     = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_UNLOAD_INFO_TITLE[] PROGMEM        = """\xb8""""\xdd""""\xe1""""\xe2""""\xe0""""\xe3""""\xda""""\xe6""""\xd8""""\xd8""";
const char RU_SCREEN_UNLOAD_INFO_TEXT[] PROGMEM         = """\xbd""""\xd0""""\xd6""""\xdc""""\xd8""""\xe2""""\xd5"" ""\xd8"" ""\xdf""""\xde""""\xd4""""\xde""""\xd6""""\xd4""""\xd8""""\xe2""""\xd5"" ""\xd2""""\xeb""""\xdf""""\xe3""""\xe1""""\xda""""\xd0"" ""\xdd""""\xd8""""\xe2""""\xd8"" ""\xd4""""\xdb""""\xef"" ""\xd5""""\xd5"" ""\xe3""""\xd4""""\xd0""""\xdb""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_UNLOADING_TITLE[] PROGMEM          = """\xc3""""\xd4""""\xd0""""\xdb""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_UNLOADING_TEXT[] PROGMEM           = """\xb2""""\xeb""""\xd1""""\xe0""""\xde""""\xe1""";
const char RU_SCREEN_UNLOAD_CONFIRM_TITLE[] PROGMEM     = """\xb7""""\xd0""""\xd2""""\xd5""""\xe0""""\xe8""""\xd5""""\xdd""""\xde""";
const char RU_SCREEN_UNLOAD_CONFIRM_TEXT[] PROGMEM      = """\xb2""""\xe1""""\xd5"" ""\xdf""""\xe0""""\xd0""""\xd2""""\xd8""""\xdb""""\xec""""\xdd""""\xde""?";
const char RU_SCREEN_LOAD_INIT_TITLE[] PROGMEM          = """\xc3""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_LOAD_INIT_TEXT[] PROGMEM           = """\xbd""""\xd0""""\xe7""""\xd0""""\xe2""""\xec"" ""\xdf""""\xe0""""\xde""""\xe6""""\xd5""""\xe1""""\xe1""?";
const char RU_SCREEN_LOAD_HOME_TITLE[] PROGMEM          = """\xb2""""\xe1""""\xe2""""\xd0""""\xd2""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_LOAD_HOME_TEXT[] PROGMEM           = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_LOAD_SELECT_TITLE[] PROGMEM        = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_LOAD_HEATING_TITLE[] PROGMEM       = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_LOAD_INFO_TITLE[] PROGMEM          = """\xb8""""\xdd""""\xe1""""\xe2""""\xe0""""\xe3""""\xda""""\xe6""""\xd8""""\xd8""";
const char RU_SCREEN_LOAD_INFO_TEXT[] PROGMEM           = """\xb2""""\xe1""""\xe2""""\xd0""""\xd2""""\xec""""\xe2""""\xd5"" ""\xdd""""\xd8""""\xe2""""\xec"" ""\xd8"" ""\xdd""""\xd0""""\xd6""""\xdc""""\xd8""""\xe2""""\xd5"" ""\xda""""\xdd""""\xde""""\xdf""""\xda""""\xe3"" ""\xd4""""\xdb""""\xef"" ""\xd5""""\xd5"" ""\xd7""""\xd0""""\xd3""""\xe0""""\xe3""""\xd7""""\xda""""\xd8""";
const char RU_SCREEN_LOADING_TITLE[] PROGMEM            = """\xc3""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_LOADING_TEXT[] PROGMEM             = """\xbd""""\xd8""""\xe2""""\xec"" ""\xd7""""\xd0""""\xd3""""\xe0""""\xe3""""\xd6""""\xd0""""\xd5""""\xe2""""\xe1""""\xef""";
const char RU_SCREEN_LOAD_CONFIRM_TITLE[] PROGMEM       = """\xb7""""\xd0""""\xd2""""\xd5""""\xe0""""\xe8""""\xd5""""\xdd""""\xde""";
const char RU_SCREEN_LOAD_CONFIRM_TEXT[] PROGMEM        = """\xb2""""\xe1""""\xd5"" ""\xdf""""\xe0""""\xd0""""\xd2""""\xd8""""\xdb""""\xec""""\xdd""""\xde""?";
const char RU_SCREEN_LEVEL_INIT_TITLE[] PROGMEM         = """\xb2""""\xeb""""\xe0""""\xde""""\xd2""""\xdd""""\xef""""\xe2""""\xec"" ""\xde""""\xe1""""\xdd""""\xde""""\xd2""""\xd0""""\xdd""""\xd8""""\xd5""";
const char RU_SCREEN_LEVEL_INIT_TEXT[] PROGMEM          = """\xbd""""\xd0""""\xe7""""\xd0""""\xe2""""\xec"" ""\xdf""""\xe0""""\xde""""\xe6""""\xd5""""\xe1""""\xe1""?";
const char RU_SCREEN_LEVEL_PREHEATING_TITLE[] PROGMEM   = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_LEVEL_HOMING_TITLE[] PROGMEM       = """\xb4""""\xde""""\xdc""""\xd0""""\xe8""""\xdd""""\xef""""\xef""";
const char RU_SCREEN_LEVEL_HOMING_TEXT[] PROGMEM        = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_LEVEL1_TITLE[] PROGMEM             = """\xb2""""\xeb""""\xe0""""\xde""""\xd2""""\xdd""""\xef""""\xe2""""\xec"" ""\xde""""\xe1""""\xdd""""\xde""""\xd2""""\xd0""""\xdd""""\xd8""""\xd5""";
const char RU_SCREEN_LEVEL1_TEXT[] PROGMEM              = """\xbd""""\xd0""""\xe1""""\xe2""""\xe0""""\xd0""""\xd8""""\xd2""""\xd0""""\xe2""""\xec"" ""\xdf""""\xd5""""\xe0""""\xd2""""\xe3""""\xee"" ""\xe2""""\xde""""\xe7""""\xda""""\xe3"" ""\xd4""""\xde"" ""\xdf""""\xde""""\xef""""\xd2""""\xdb""""\xd5""""\xdd""""\xd8""""\xef"" ""\xda""""\xe0""""\xd0""""\xe1""""\xdd""""\xde""""\xd3""""\xde"" ""\xe6""""\xd2""""\xd5""""\xe2""""\xd0""";
const char RU_SCREEN_LEVEL2_TITLE[] PROGMEM             = """\xb2""""\xeb""""\xe0""""\xde""""\xd2""""\xdd""""\xef""""\xe2""""\xec"" ""\xde""""\xe1""""\xdd""""\xde""""\xd2""""\xd0""""\xdd""""\xd8""""\xd5""";
const char RU_SCREEN_LEVEL2_TEXT[] PROGMEM              = """\xbd""""\xd0""""\xe1""""\xe2""""\xe0""""\xd0""""\xd8""""\xd2""""\xd0""""\xe2""""\xec"" ""\xd2""""\xe2""""\xde""""\xe0""""\xe3""""\xee"" ""\xe2""""\xde""""\xe7""""\xda""""\xe3"" ""\xd4""""\xde"" ""\xdf""""\xde""""\xef""""\xd2""""\xdb""""\xd5""""\xdd""""\xd8""""\xef"" ""\xda""""\xe0""""\xd0""""\xe1""""\xdd""""\xde""""\xd3""""\xde"" ""\xe6""""\xd2""""\xd5""""\xe2""""\xd0""";
const char RU_SCREEN_LEVEL3_TITLE[] PROGMEM             = """\xb2""""\xeb""""\xe0""""\xde""""\xd2""""\xdd""""\xef""""\xe2""""\xec"" ""\xde""""\xe1""""\xdd""""\xde""""\xd2""""\xd0""""\xdd""""\xd8""""\xd5""";
const char RU_SCREEN_LEVEL3_TEXT[] PROGMEM              = """\xbd""""\xd0""""\xe1""""\xe2""""\xe0""""\xd0""""\xd8""""\xd2""""\xd0""""\xe2""""\xec"" ""\xe2""""\xe0""""\xd5""""\xe2""""\xec""""\xee"" ""\xe2""""\xde""""\xe7""""\xda""""\xe3"" ""\xd4""""\xde"" ""\xdf""""\xde""""\xef""""\xd2""""\xdb""""\xd5""""\xdd""""\xd8""""\xef"" ""\xda""""\xe0""""\xd0""""\xe1""""\xdd""""\xde""""\xd3""""\xde"" ""\xe6""""\xd2""""\xd5""""\xe2""""\xd0""";
const char RU_SCREEN_LEVEL_CONFIRM_TITLE[] PROGMEM      = """\xb7""""\xd0""""\xd2""""\xd5""""\xe0""""\xe8""""\xd5""""\xdd""""\xde""";
const char RU_SCREEN_LEVEL_CONFIRM_TEXT[] PROGMEM       = """\xb2""""\xe1""""\xd5"" ""\xdf""""\xe0""""\xd0""""\xd2""""\xd8""""\xdb""""\xec""""\xdd""""\xde""?";
const char RU_SCREEN_AUTOHOME_INIT_TITLE[] PROGMEM      = """\xb4""""\xde""""\xdc""""\xd0""""\xe8""""\xdd""""\xef""""\xef""";
const char RU_SCREEN_AUTOHOME_INIT_TEXT[] PROGMEM       = """\xbd""""\xd0""""\xe7""""\xd0""""\xe2""""\xec"" ""\xdf""""\xe0""""\xde""""\xe6""""\xd5""""\xe1""""\xe1""?";
const char RU_SCREEN_AUTOHOME_HEATING_TITLE[] PROGMEM   = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_AUTOHOME_HOMING_TITLE[] PROGMEM    = """\xb4""""\xde""""\xdc""""\xd0""""\xe8""""\xdd""""\xef""""\xef""";
const char RU_SCREEN_AUTOHOME_HOMING_TEXT[] PROGMEM     = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_SETTINGS_TITLE[] PROGMEM           = """\xbd""""\xd0""""\xe1""""\xe2""""\xe0""""\xde""""\xd9""""\xda""""\xd8""";
const char RU_SCREEN_SETTINGS_TEXT[] PROGMEM            = """\xb2""""\xeb""""\xd1""""\xd5""""\xe0""""\xd8""""\xe2""""\xd5"" ""\xde""""\xdf""""\xe6""""\xd8""""\xee""";
const char RU_SCREEN_MOVE_INFO_TITLE[] PROGMEM          = """\xbf""""\xd5""""\xe0""""\xd5""""\xd4""""\xd2""""\xd8""""\xdd""""\xe3""""\xe2""""\xec"" ""\xde""""\xe1""""\xd8""";
const char RU_SCREEN_MOVE_INFO_TEXT[] PROGMEM           = """\xbf""""\xde""""\xd7""""\xd8""""\xe6""""\xd8""""\xef"" ""\xdd""""\xd5"" ""\xde""""\xdf""""\xe0""""\xd5""""\xd4""""\xd5""""\xdb""""\xd5""""\xdd""""\xd0"", ""\xd2""""\xd5""""\xe0""""\xdd""""\xd8""""\xe2""""\xd5""""\xe1""""\xec"" ""\xd2"" ""\xdd""""\xd0""""\xe7""""\xd0""""\xdb""""\xde"" ""\xd4""""\xdb""""\xef"" ""\xdf""""\xe0""""\xde""""\xd4""""\xde""""\xdb""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_MOVE_TITLE[] PROGMEM               = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2""""\xd8""""\xe2""""\xec"" ""\xde""""\xe1""""\xd8""";
const char RU_SCREEN_MOVE_TEXT[] PROGMEM                = """\xb2""""\xeb""""\xd1""""\xd5""""\xe0""""\xd8""""\xe2""""\xd5"" ""\xde""""\xdf""""\xe6""""\xd8""""\xee""";
const char RU_SCREEN_MOVE_CONFIRM_TITLE[] PROGMEM       = """\xcd""""\xda""""\xe1""""\xe2""""\xe0""""\xe3""""\xd4"". / ""\xdf""""\xd5""""\xe0""""\xd5""""\xdc"". ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_CONFIRM_TEXT[] PROGMEM        = """\xc0""""\xd0""""\xd7""""\xde""""\xd3""""\xe0""""\xd5""""\xe2""""\xec"" ""\xed""""\xda""""\xe1""""\xe2""""\xe0""""\xe3""""\xd4""""\xd5""""\xe0""?";
const char RU_SCREEN_MOVE_HEATING_TITLE[] PROGMEM       = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_MOVE_X_TITLE[] PROGMEM             = """\xbe""""\xe1""""\xec"" X / ""\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2"". ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_X_TEXT[] PROGMEM              = """\xb2""""\xeb""""\xd1""""\xd5""""\xe0""""\xd8""""\xe2""""\xd5"" ""\xde""""\xdf""""\xe6""""\xd8""""\xee""";
const char RU_SCREEN_MOVE_Y_TITLE[] PROGMEM             = """\xbe""""\xe1""""\xec"" Y / ""\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2"". ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_Y_TEXT[] PROGMEM              = """\xb2""""\xeb""""\xd1""""\xd5""""\xe0""""\xd8""""\xe2""""\xd5"" ""\xde""""\xdf""""\xe6""""\xd8""""\xee""";
const char RU_SCREEN_MOVE_Z_TITLE[] PROGMEM             = """\xbe""""\xe1""""\xec"" Z / ""\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2"". ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_Z_TEXT[] PROGMEM              = """\xb2""""\xeb""""\xd1""""\xd5""""\xe0""""\xd8""""\xe2""""\xd5"" ""\xde""""\xdf""""\xe6""""\xd8""""\xee""";
const char RU_SCREEN_MOVE_E_TITLE[] PROGMEM             = """\xcd""""\xda""""\xe1""""\xe2""""\xe0""""\xe3""""\xd4"". / ""\xbf""""\xd5""""\xe0""""\xd5""""\xdc"". ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_E_TEXT[] PROGMEM              = """\xb2""""\xeb""""\xd1""""\xd5""""\xe0""""\xd8""""\xe2""""\xd5"" ""\xde""""\xdf""""\xe6""""\xd8""""\xee""";
const char RU_SCREEN_MOVE_X_01MM_TITLE[] PROGMEM        = """\xbe""""\xe1""""\xec"" X / 0,1 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_X_1MM_TITLE[] PROGMEM         = """\xbe""""\xe1""""\xec"" X / 1 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_X_10MM_TITLE[] PROGMEM        = """\xbe""""\xe1""""\xec"" X / 10 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_Y_01MM_TITLE[] PROGMEM        = """\xbe""""\xe1""""\xec"" Y / 0,1 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_Y_1MM_TITLE[] PROGMEM         = """\xbe""""\xe1""""\xec"" Y / 1 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_Y_10MM_TITLE[] PROGMEM        = """\xbe""""\xe1""""\xec"" Y / 10 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_Z_01MM_TITLE[] PROGMEM        = """\xbe""""\xe1""""\xec"" Z / 0,1 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_Z_1MM_TITLE[] PROGMEM         = """\xbe""""\xe1""""\xec"" Z / 1 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_Z_10MM_TITLE[] PROGMEM        = """\xbe""""\xe1""""\xec"" Z / 10 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_E_01MM_TITLE[] PROGMEM        = """\xcd""""\xda""""\xe1""""\xe2""""\xe0""""\xe3""""\xd4""""\xd5""""\xe0"" / 0,1 ""\xdc""""\xdc""";
const char RU_SCREEN_MOVE_E_1MM_TITLE[] PROGMEM         = """\xcd""""\xda""""\xe1""""\xe2""""\xe0""""\xe3""""\xd4""""\xd5""""\xe0"" / 1 ""\xdc""""\xdc""";
const char RU_SCREEN_TEMP_TITLE[] PROGMEM               = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_TEMP_HEATING_TITLE[] PROGMEM       = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_INFO_TITLE[] PROGMEM               = """\xb2""""\xd5""""\xe0""""\xe1""""\xd8""""\xef""";
const char RU_SCREEN_CONTACT_TITLE[] PROGMEM            = """\xbf""""\xde""""\xd4""""\xd4""""\xd5""""\xe0""""\xd6""""\xda""""\xd0""";
const char RU_SCREEN_CONTACT_TEXT[] PROGMEM             = "www.bq.com support.3d@bq.com";
const char RU_SCREEN_OFFSET_INIT_TITLE[] PROGMEM        = """\xbe""""\xe2""""\xe0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xd0""""\xe2""""\xec"" ""\xd7""""\xd0""""\xd7""""\xde""""\xe0""";
const char RU_SCREEN_OFFSET_INIT_TEXT[] PROGMEM         = """\xbd""""\xd0""""\xe7""""\xd0""""\xe2""""\xec"" ""\xdf""""\xe0""""\xde""""\xe6""""\xd5""""\xe1""""\xe1""?";
const char RU_SCREEN_OFFSET_PREHEATING_TITLE[] PROGMEM  = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_OFFSET_HOME_TITLE[] PROGMEM        = """\xbe""""\xe2""""\xe0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xd0""""\xe2""""\xec"" ""\xd7""""\xd0""""\xd7""""\xde""""\xe0""";
const char RU_SCREEN_OFFSET_HOME_TEXT[] PROGMEM         = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_OFFSET_PLANE_TITLE[] PROGMEM       = """\xbe""""\xe2""""\xe0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xd0""""\xe2""""\xec"" ""\xd7""""\xd0""""\xd7""""\xde""""\xe0""";
const char RU_SCREEN_OFFSET_PLANE_TEXT[] PROGMEM        = """\xc0""""\xd0""""\xe1""""\xe7""""\xd5""""\xe2"" ""\xdf""""\xdb""""\xde""""\xe1""""\xda""""\xde""""\xe1""""\xe2""""\xd8"" ""\xde""""\xe1""""\xdd""""\xde""""\xd2""""\xd0""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_OFFSET_INFO_TITLE[] PROGMEM        = """\xb8""""\xdd""""\xe1""""\xe2""""\xe0""""\xe3""""\xda""""\xe6""""\xd8""""\xd8""";
const char RU_SCREEN_OFFSET_INFO_TEXT[] PROGMEM         = """\xbd""""\xd0""""\xd6""""\xdc""""\xd8""""\xe2""""\xd5"" ""\xd8"" ""\xde""""\xe2""""\xe0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xe3""""\xd9""""\xe2""""\xd5"" ""\xd7""""\xdd""""\xd0""""\xe7""""\xd5""""\xdd""""\xd8""""\xd5"" ""\xe2""""\xd0""""\xda"", ""\xe7""""\xe2""""\xde""""\xd1""""\xeb"" ""\xdd""""\xd0""""\xe1""""\xd0""""\xd4""""\xda""""\xd0"" ""\xda""""\xd0""""\xe1""""\xd0""""\xdb""""\xd0""""\xe1""""\xec"" ""\xe1""""\xe2""""\xde""""\xdb""""\xd8""""\xda""""\xd0""";
const char RU_SCREEN_OFFSET_SET_TITLE[] PROGMEM         = """\xbe""""\xe2""""\xe0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xd0""""\xe2""""\xec"" ""\xd7""""\xd0""""\xd7""""\xde""""\xe0""";
const char RU_SCREEN_OFFSET_FINISH_TITLE[] PROGMEM      = """\xb7""""\xd0""""\xd2""""\xd5""""\xe0""""\xe8""""\xd5""""\xdd""""\xde""";
const char RU_SCREEN_OFFSET_FINISH_TEXT[] PROGMEM       = """\xb2""""\xe1""""\xd5"" ""\xdf""""\xe0""""\xd0""""\xd2""""\xd8""""\xdb""""\xec""""\xdd""""\xde""?";
const char RU_SCREEN_PRINT_HEATING_TITLE[] PROGMEM      = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_PRINT_PRINTING[] PROGMEM           = """\xbf""""\xd5""""\xe7""""\xd0""""\xe2""""\xec""";
const char RU_SCREEN_PRINT_PAUSE[] PROGMEM              = """\xbf""""\xd0""""\xe3""""\xd7""""\xd0""";
const char RU_SCREEN_PRINT_PAUSED[] PROGMEM             = """\xbd""""\xd0"" ""\xdf""""\xd0""""\xe3""""\xd7""""\xd5""";
const char RU_SCREEN_PRINT_PAUSING[] PROGMEM            = """\xbf""""\xd0""""\xe3""""\xd7""""\xd0""";
const char RU_SCREEN_PRINT_COMPLETE_TITLE[] PROGMEM     = """\xbf""""\xd5""""\xe7""""\xd0""""\xe2""""\xec"" ""\xd7""""\xd0""""\xd2""""\xd5""""\xe0""""\xe8""""\xd5""""\xdd""""\xd0""";
const char RU_SCREEN_PRINT_COMPLETE_TEXT[] PROGMEM      = """\xc1""""\xdd""""\xd8""""\xdc""""\xd8""""\xe2""""\xd5"" ""\xd4""""\xd5""""\xe2""""\xd0""""\xdb""""\xec"" ""\xe1"" ""\xde""""\xe1""""\xdd""""\xde""""\xd2""""\xd0""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_STOP_CONFIRM_TITLE[] PROGMEM       = """\xbe""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_CHANGE_INIT_TITLE[] PROGMEM        = """\xb7""""\xd0""""\xdc""""\xd5""""\xdd""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_CHANGE_INIT_TEXT[] PROGMEM         = """\xbd""""\xd0""""\xe7""""\xd0""""\xe2""""\xec"" ""\xdf""""\xe0""""\xde""""\xe6""""\xd5""""\xe1""""\xe1""?";
const char RU_SCREEN_CHANGE_PAUSE_TITLE[] PROGMEM       = """\xb7""""\xd0""""\xdc""""\xd5""""\xdd""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_CHANGE_PAUSE_TEXT[] PROGMEM        = """\xbe""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xda""""\xd0""";
const char RU_SCREEN_CHANGE_SELECT_TITLE[] PROGMEM      = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_CHANGE_HEATING_TITLE[] PROGMEM     = """\xc2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd0""";
const char RU_SCREEN_CHANGE_INFO1_TITLE[] PROGMEM       = """\xb8""""\xdd""""\xe1""""\xe2""""\xe0""""\xe3""""\xda""""\xe6""""\xd8""""\xd8""";
const char RU_SCREEN_CHANGE_INFO1_TEXT[] PROGMEM        = """\xbd""""\xd0""""\xd6""""\xdc""""\xd8""""\xe2""""\xd5"" ""\xd8"" ""\xdf""""\xde""""\xd4""""\xde""""\xd6""""\xd4""""\xd8""""\xe2""""\xd5"" ""\xd2""""\xeb""""\xdf""""\xe3""""\xe1""""\xda""""\xd0"" ""\xdd""""\xd8""""\xe2""""\xd8"" ""\xd4""""\xdb""""\xef"" ""\xd5""""\xd5"" ""\xe3""""\xd4""""\xd0""""\xdb""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_CHANGE_UNLOAD_TITLE[] PROGMEM      = """\xc3""""\xd4""""\xd0""""\xdb""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_CHANGE_UNLOAD_TEXT[] PROGMEM       = """\xb2""""\xeb""""\xd1""""\xe0""""\xde""""\xe1""";
const char RU_SCREEN_CHANGE_INFO2_TITLE[] PROGMEM       = """\xb8""""\xdd""""\xe1""""\xe2""""\xe0""""\xe3""""\xda""""\xe6""""\xd8""""\xd8""";
const char RU_SCREEN_CHANGE_INFO2_TEXT[] PROGMEM        = """\xb2""""\xe1""""\xe2""""\xd0""""\xd2""""\xec""""\xe2""""\xd5"" ""\xdd""""\xd8""""\xe2""""\xec"" ""\xd8"" ""\xdd""""\xd0""""\xd6""""\xdc""""\xd8""""\xe2""""\xd5"" ""\xda""""\xdd""""\xde""""\xdf""""\xda""""\xe3"" ""\xd4""""\xdb""""\xef"" ""\xd5""""\xd5"" ""\xd7""""\xd0""""\xd3""""\xe0""""\xe3""""\xd7""""\xda""""\xd8""";
const char RU_SCREEN_CHANGE_LOAD_TITLE[] PROGMEM        = """\xc3""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_CHANGE_LOAD_TEXT[] PROGMEM         = """\xbd""""\xd8""""\xe2""""\xec"" ""\xd7""""\xd0""""\xd3""""\xe0""""\xe3""""\xd6""""\xd0""""\xd5""""\xe2""""\xe1""""\xef""";
const char RU_SCREEN_CHANGE_CONFIRM_TITLE[] PROGMEM     = """\xb7""""\xd0""""\xd2""""\xd5""""\xe0""""\xe8""""\xd5""""\xdd""""\xde""";
const char RU_SCREEN_CHANGE_CONFIRM_TEXT[] PROGMEM      = """\xb2""""\xe1""""\xd5"" ""\xdf""""\xe0""""\xd0""""\xd2""""\xd8""""\xdb""""\xec""""\xdd""""\xde""?";
const char RU_SCREEN_SPEED_TITLE[] PROGMEM              = """\xb8""""\xd7""""\xdc""""\xd5""""\xdd""""\xd8""""\xe2""""\xec"" ""\xe1""""\xda""""\xde""""\xe0""""\xde""""\xe1""""\xe2""""\xec""";
const char RU_SCREEN_SERIAL_TITLE[] PROGMEM             = """\xba""""\xde""""\xdd""""\xe2""""\xe0""""\xde""""\xdb""""\xec"" ""\xe1""""\xd5""""\xe0""""\xd8""""\xd8""";
const char RU_SCREEN_WIZARD_TITLE[] PROGMEM             = """\xbc""""\xd0""""\xe1""""\xe2""""\xd5""""\xe0""";
const char RU_SCREEN_WIZARD_SELECT[] PROGMEM            = """\xb2""""\xeb""""\xd1""""\xd5""""\xe0""""\xd8""""\xe2""""\xd5"" ""\xef""""\xd7""""\xeb""""\xda""";
const char RU_SCREEN_WIZARD_LANGUAGE[] PROGMEM          = """\xc0""""\xe3""""\xe1""""\xe1""""\xda""""\xd8""""\xd9""";
const char RU_SCREEN_WIZARD_TEXT1[] PROGMEM             = """\xb4""""\xde""""\xd1""""\xe0""""\xde"" ""\xdf""""\xde""""\xd6""""\xd0""""\xdb""""\xde""""\xd2""""\xd0""""\xe2""""\xec""! ""\xbd""""\xd0""""\xe7""""\xdd""""\xd5""""\xdc"" ""\xe1"" ""\xdf""""\xde""""\xd4""""\xd3""""\xde""""\xe2""""\xde""""\xd2""""\xda""""\xd8"" ""\xdf""""\xe0""""\xd8""""\xdd""""\xe2""""\xd5""""\xe0""""\xd0""";
const char RU_SCREEN_WIZARD_TEXT2[] PROGMEM             = """\xbd""""\xd0""""\xe7""""\xdd""""\xd5""""\xdc"" ""\xda""""\xd0""""\xdb""""\xd8""""\xd1""""\xe0""""\xde""""\xd2""""\xda""""\xe3"" ""\xd4""""\xd0""""\xe2""""\xe7""""\xd8""""\xda""""\xd0"" ""\xe1"" ""\xe0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd8"" ""\xd7""""\xd0""""\xd7""""\xde""""\xe0""""\xd0""";
const char RU_SCREEN_WIZARD_TEXT3[] PROGMEM             = """\xbf""""\xde""""\xdc""""\xdd""""\xd8""""\xe2""""\xd5"", ""\xe7""""\xe2""""\xde"" ""\xed""""\xda""""\xe1""""\xe2""""\xe0""""\xe3""""\xd4""""\xd5""""\xe0"" ""\xd8"" ""\xde""""\xe1""""\xdd""""\xde""""\xd2""""\xd0""""\xdd""""\xd8""""\xd5"" ""\xd4""""\xde""""\xdb""""\xd6""""\xdd""""\xeb"" ""\xd1""""\xeb""""\xe2""""\xec"" ""\xe7""""\xd8""""\xe1""""\xe2""""\xeb""""\xdc""""\xd8""";
const char RU_SCREEN_WIZARD_TEXT4[] PROGMEM             = """\xbd""""\xd0""""\xe1""""\xdb""""\xd0""""\xd6""""\xd4"". "MACHINE_NAME"! ""\xb5""""\xe1""""\xdb""""\xd8"" ""\xdc""""\xde""""\xd6""""\xdd""""\xde"" ""\xdf""""\xe0""""\xd5""""\xd4""""\xe1""""\xe2""""\xd0""""\xd2""""\xd8""""\xe2""""\xec"", ""\xe2""""\xde"" ""\xdc""""\xde""""\xd6""""\xdd""""\xde"" ""\xd8"" ""\xe1""""\xd4""""\xd5""""\xdb""""\xd0""""\xe2""""\xec""";
const char RU_SCREEN_RESET_INIT_TITLE[] PROGMEM         = "A""\xdf""""\xdf""""\xd0""""\xe0""""\xd0""""\xe2""""\xdd""""\xeb""""\xd9"" ""\xe1""""\xd1""""\xe0""""\xde""""\xe1""";
const char RU_SCREEN_RESET_INIT_TEXT[] PROGMEM          = """\xb2""""\xde""""\xe1""""\xe1""""\xe2""""\xd0""""\xdd""-""\xe2""""\xec"" ""\xd7""""\xdd""""\xd0""""\xe7""""\xd5""""\xdd""""\xd8""""\xef""?";
const char RU_SCREEN_RESET_INFO_TITLE[] PROGMEM         = """\xb2""""\xdd""""\xd8""""\xdc""""\xd0""""\xdd""""\xd8""""\xd5""!";
const char RU_SCREEN_RESET_INFO_TEXT[] PROGMEM          = """\xb2"" ""\xe1""""\xdb""""\xe3""""\xe7""""\xd0""""\xd5"" ""\xdf""""\xe0""""\xde""""\xd4""""\xde""""\xdb""""\xd6""""\xd5""""\xdd""""\xd8""""\xef"" ""\xd7""""\xd0""""\xd2""""\xde""""\xd4""""\xe1""""\xda""""\xd8""""\xd5"" ""\xd7""""\xdd""""\xd0""""\xe7""""\xd5""""\xdd""""\xd8""""\xef"" ""\xd1""""\xe3""""\xd4""""\xe3""""\xe2"" ""\xd2""""\xde""""\xe1""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xdb""""\xd5""""\xdd""""\xeb""";
const char RU_SCREEN_RESET_TITLE[] PROGMEM              = "A""\xdf""""\xdf""""\xd0""""\xe0""""\xd0""""\xe2""""\xdd""""\xeb""""\xd9"" ""\xe1""""\xd1""""\xe0""""\xde""""\xe1""";
const char RU_SCREEN_RESET_TEXT[] PROGMEM               = """\xb8""""\xd4""""\xd5""""\xe2"" ""\xe3""""\xd4""""\xd0""""\xdb""""\xd5""""\xdd""""\xd8""""\xd5"", ""\xdd""""\xd5"" ""\xd2""""\xeb""""\xda""""\xdb""""\xee""""\xe7""""\xd0""""\xd9""""\xe2""""\xd5"" ""\xdf""""\xe0""""\xd8""""\xdd""""\xe2""""\xd5""""\xe0""";
const char RU_ICON_SD_NOSD[] PROGMEM                    = """\xc3""""\xe1""""\xe2""""\xd0""""\xdd"". ""\xda""""\xd0""""\xe0""""\xe2""""\xde""""\xe7""""\xda""""\xe3"" SD";
const char RU_ICON_SD_SD[] PROGMEM                      = """\xbf""""\xd5""""\xe7""""\xd0""""\xe2""""\xd0""""\xe2""""\xec"" ""\xe1"" SD";
const char RU_ICON_FILAMENT_UNLOAD[] PROGMEM            = """\xc3""""\xd4""""\xd0""""\xdb""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_ICON_FILAMENT_LOAD[] PROGMEM              = """\xc3""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_ICON_LEVELING[] PROGMEM                   = """\xb2""""\xeb""""\xe0""""\xde""""\xd2""""\xdd"". ""\xde""""\xe1""""\xdd""""\xde""""\xd2""""\xd0""""\xdd""""\xd8""""\xd5""";
const char RU_ICON_HOMING[] PROGMEM                     = """\xb4""""\xde""""\xdc""""\xd0""""\xe8""""\xdd""""\xef""""\xef""";
const char RU_ICON_SETTINGS[] PROGMEM                   = """\xbd""""\xd0""""\xe1""""\xe2""""\xe0""""\xde""""\xd9""""\xda""""\xd8""";
const char RU_ICON_STEPPERS[] PROGMEM                   = """\xcd""""\xdb""""\xd5""""\xda""""\xe2""""\xe0""""\xde""""\xd4""""\xd2""-""\xdb""""\xd8"" ""\xb2""""\xba""""\xbb""";
const char RU_ICON_STEPPERS_OFF[] PROGMEM               = """\xcd""""\xdb""""\xd5""""\xda""""\xe2""""\xe0""""\xde""""\xd4""""\xd2""-""\xdb""""\xd8"" ""\xb2""""\xba""""\xbb""";
const char RU_ICON_MOVEAXIS[] PROGMEM                   = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2""""\xd8""""\xe2""""\xec"" ""\xde""""\xe1""""\xd8""";
const char RU_ICON_TEMPERATURE[] PROGMEM                = """\xb8""""\xd7""""\xdc""""\xd5""""\xdd""""\xd8""""\xe2""""\xec"" ""\xe2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2"".";
const char RU_ICON_PLAY[] PROGMEM                       = """\xb2""""\xde""""\xd7""""\xde""""\xd1""""\xdd""""\xde""""\xd2""""\xd8""""\xe2""""\xec""";
const char RU_ICON_PAUSE[] PROGMEM                      = """\xc3""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xd8""""\xe2""""\xec"" ""\xdf""""\xd0""""\xe3""""\xd7""""\xe3""";
const char RU_ICON_STOP[] PROGMEM                       = """\xbe""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xd8""""\xe2""""\xec""";
const char RU_ICON_CHANGE_FILAMENT[] PROGMEM            = """\xb7""""\xd0""""\xdc""""\xd5""""\xdd""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_ICON_CHANGE_SPEED[] PROGMEM               = """\xb8""""\xd7""""\xdc""""\xd5""""\xdd""""\xd8""""\xe2""""\xec"" ""\xe1""""\xda""""\xde""""\xe0""""\xde""""\xe1""""\xe2""""\xec""";
const char RU_ICON_RETRY[] PROGMEM                      = """\xbf""""\xde""""\xd2""""\xe2""""\xde""""\xe0""""\xd8""""\xe2""""\xec"" ""\xdf""""\xde""""\xdf""""\xeb""""\xe2""""\xda""""\xe3""";
const char RU_ICON_OK2[] PROGMEM                        = """\xbf""""\xde""""\xd4""""\xe2""""\xd2""""\xd5""""\xe0""""\xd4""""\xd8""""\xe2""""\xec""";
const char RU_ICON_MOVE_X[] PROGMEM                     = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2""""\xd8""""\xe2""""\xec"" ""\xde""""\xe1""""\xec"" X";
const char RU_ICON_MOVE_Y[] PROGMEM                     = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2""""\xd8""""\xe2""""\xec"" ""\xde""""\xe1""""\xec"" Y";
const char RU_ICON_MOVE_Z[] PROGMEM                     = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2""""\xd8""""\xe2""""\xec"" ""\xde""""\xe1""""\xec"" Z";
const char RU_ICON_MOVE_E[] PROGMEM                     = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2"". ""\xed""""\xda""""\xe1""""\xe2""""\xe0""""\xe3""""\xd4"".";
const char RU_ICON_MOVE_10MM[] PROGMEM                  = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2"". ""\xdd""""\xd0"" 10 ""\xdc""""\xdc""";
const char RU_ICON_MOVE_1MM[] PROGMEM                   = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc""""\xd5""""\xe1""""\xe2"". ""\xdd""""\xd0"" 1 ""\xdc""""\xdc""";
const char RU_ICON_MOVE_01MM[] PROGMEM                  = """\xbf""""\xd5""""\xe0""""\xd5""""\xdc"". ""\xdd""""\xd0"" 0.1 ""\xdc""""\xdc""";
const char RU_OPTION_LIGHTLED[] PROGMEM                 = """\xc1""""\xd2""""\xd5""""\xe2""""\xde""""\xd4""""\xd8""""\xde""""\xd4""";
const char RU_OPTION_BOX_FAN[] PROGMEM                  = """\xd2""""\xd5""""\xdd""""\xe2""""\xd8""""\xdb""""\xef""""\xe2""""\xde""""\xe0""";
const char RU_OPTION_INFO[] PROGMEM                     = """\xb2""""\xd5""""\xe0""""\xe1""""\xd8""""\xef""";
const char RU_OPTION_CONTACT[] PROGMEM                  = """\xbf""""\xde""""\xd4""""\xd4""""\xd5""""\xe0""""\xd6""""\xda""""\xd0""";
const char RU_OPTION_AUTOLEVEL[] PROGMEM                = "A""\xd2""""\xe2""""\xde""""\xd2""""\xeb""""\xe0""""\xd0""""\xd2""""\xdd"".";
const char RU_OPTION_SERIAL[] PROGMEM                   = """\xcd""""\xda""""\xe0""""\xd0""""\xdd"" ""\xe1""""\xd5""""\xe0""""\xd8""""\xd8""";
const char RU_OPTION_OFFSET[] PROGMEM                   = """\xbe""""\xe2""""\xe0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0"".""\xd7""""\xd0""""\xd7""""\xde""""\xe0""";
const char RU_OPTION_LANGUAGE[] PROGMEM                 = """\xcf""""\xd7""""\xeb""""\xda""";
const char RU_OPTION_RESET[] PROGMEM                    = "A""\xdf""""\xdf""""\xd0""""\xe0""""\xd0""""\xe2""""\xdd"". ""\xe1""""\xd1""""\xe0""""\xde""""\xe1""";
const char RU_PUSH_TO_CONFIRM[] PROGMEM                 = """\xbd""""\xd0""""\xd6""""\xd0""""\xe2""""\xec"" ""\xd4""""\xdb""""\xef"" ""\xdf""""\xde""""\xd4""""\xe2""""\xd2""""\xd5""""\xe0""""\xd6"".";
const char RU_PUSH_TO_CONTINUE[] PROGMEM                = """\xbd""""\xd0""""\xd6""""\xd0""""\xe2""""\xec"" ""\xd4""""\xdb""""\xef"" ""\xdf""""\xe0""""\xde""""\xd4""""\xde""""\xdb""""\xd6"".";
const char RU_PUSH_TO_START[] PROGMEM                   = """\xbd""""\xd0""""\xd6""""\xd0""""\xe2""""\xec"" ""\xd4""""\xdb""""\xef"" ""\xdd""""\xd0""""\xe7""""\xd0""""\xdb""""\xd0""";
const char RU_PUSH_TO_BACK[] PROGMEM                    = """\xbd""""\xd0""""\xd6""""\xd0""""\xe2""""\xec"" ""\xd4""""\xdb""""\xef"" ""\xd2""""\xde""""\xd7""""\xd2""""\xe0""""\xd0""""\xe2""""\xd0""";
const char RU_PUSH_TO_FINISH[] PROGMEM                  = """\xbd""""\xd0""""\xd6""""\xd0""""\xe2""""\xec"" ""\xd4""""\xdb""""\xef"" ""\xd7""""\xd0""""\xd2""""\xd5""""\xe0""""\xe8"".";
const char RU_PLEASE_WAIT[] PROGMEM                     = """\xbf""""\xde""""\xd4""""\xde""""\xd6""""\xd4""""\xd8""""\xe2""""\xd5"", ""\xdf""""\xde""""\xd6"".";
const char RU_BACK[] PROGMEM                            = """\xb2""""\xde""""\xd7""""\xd2""""\xe0""""\xd0""""\xe2""";
const char RU_MODE[] PROGMEM                            = """\xc0""""\xd5""""\xd6""""\xd8""""\xdc""";
const char RU_INACTIVE[] PROGMEM                        = """\xde""""\xd6""""\xd8""""\xd4""""\xd0""""\xdd""""\xd8""""\xef""";
const char RU_TEMP_OFF[] PROGMEM                        = """\xb2""""\xeb""""\xda""""\xdb""";
const char RU_TOTAL_TIME[] PROGMEM                      = """\xbe""""\xd1""""\xe9""""\xd5""""\xd5"" ""\xd2""""\xe0""""\xd5""""\xdc""""\xef""";
const char RU_SCREEN_ERROR_TITLE[] PROGMEM              = """\xbe""""\xe8""""\xd8""""\xd1""""\xda""""\xd0""";
const char RU_SCREEN_ERROR_TEMPERATURE_TEXT[] PROGMEM   = """\xbd""""\xd5"" ""\xe3""""\xd4""""\xd0""""\xdb""""\xde""""\xe1""""\xec"" ""\xdf""""\xe0""""\xde""""\xd8""""\xd7""""\xd2""""\xd5""""\xe1""""\xe2""""\xd8"" ""\xe1""""\xe7""""\xd8""""\xe2""""\xeb""""\xd2""""\xd0""""\xdd""""\xd8""""\xd5"" ""\xd4""""\xd0""""\xdd""""\xdd""""\xeb""""\xe5"" ""\xde"" ""\xe2""""\xd5""""\xdc""""\xdf""""\xd5""""\xe0""""\xd0""""\xe2""""\xe3""""\xe0""""\xd5""";
const char RU_SCREEN_MOVE_TO_UNLOAD_TITLE[] PROGMEM     = """\xc3""""\xd4""""\xd0""""\xdb""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_MOVE_TO_UNLOAD_TEXT[] PROGMEM      = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_MOVE_TO_LOAD_TITLE[] PROGMEM       = """\xb2""""\xe1""""\xe2""""\xd0""""\xd2""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_MOVE_TO_LOAD_TEXT[] PROGMEM        = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_MOVE_TO_CHANGE_TITLE[] PROGMEM     = """\xb7""""\xd0""""\xdc""""\xd5""""\xdd""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_MOVE_TO_CHANGE_TEXT[] PROGMEM      = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_SCREEN_PRINT_STOP_TITLE[] PROGMEM         = """\xbf""""\xd5""""\xe7""""\xd0""""\xe2""""\xec"" ""\xde""""\xe1""""\xe2""""\xd0""""\xdd""""\xde""""\xd2""""\xdb""""\xd5""""\xdd""""\xd0""";
const char RU_SCREEN_PRINT_STOP_TEXT[] PROGMEM          = """\xc3""""\xd4""""\xd0""""\xdb""""\xd8""""\xe2""""\xd5"" ""\xde""""\xe1""""\xe2""""\xd0""""\xe2""""\xda""""\xd8"" ""\xe1"" ""\xdf""""\xd5""""\xe7""""\xd0""""\xe2""""\xdd""""\xde""""\xd3""""\xde"" ""\xe1""""\xe2""""\xde""""\xdb""""\xd0""";
const char RU_SCREEN_NAME_ERROR_TEXT[] PROGMEM          = """\xbd""""\xd5""""\xd4""""\xde""""\xdf""""\xe3""""\xe1""""\xe2""""\xd8""""\xdc""""\xeb""""\xd5"" ""\xe1""""\xd8""""\xdc""""\xd2""""\xde""""\xdb""""\xeb"" ""\xd2"" ""\xdd""""\xd0""""\xd7""""\xd2""""\xd0""""\xdd""""\xd8""""\xd8"" ""\xe4""""\xd0""""\xd9""""\xdb""""\xd0""";
const char RU_SCREEN_CHANGE_WAIT_PAUSE_TITLE[] PROGMEM  = """\xb7""""\xd0""""\xdc""""\xd5""""\xdd""""\xd8""""\xe2""""\xec"" ""\xdd""""\xd8""""\xe2""""\xec""";
const char RU_SCREEN_CHANGE_WAIT_PAUSE_TEXT[] PROGMEM   = """\xc0""""\xd5""""\xd3""""\xe3""""\xdb""""\xd8""""\xe0""""\xde""""\xd2""""\xda""""\xd0"" ""\xdf""""\xde""""\xdb""""\xde""""\xd6""""\xd5""""\xdd""""\xd8""""\xef""";
const char RU_OPTION_STATS[] PROGMEM                    = """\xc1""""\xe2""""\xd0""""\xe2""""\xd8""""\xe1""""\xe2""""\xd8""""\xda""""\xd0""";
const char RU_SCREEN_VIEW_STATS_TITLE[] PROGMEM         = """\xc1""""\xe2""""\xd0""""\xe2""""\xd8""""\xe1""""\xe2""""\xd8""""\xda""""\xd0""";
const char RU_SCREEN_VIEW_STATS_TEXT1[] PROGMEM         = """\xb2""""\xe0""""\xd5""""\xdc""""\xef""";
const char RU_SCREEN_VIEW_STATS_TEXT2[] PROGMEM         = """\xb2""""\xeb""""\xdf""""\xde""""\xdb""""\xdd""""\xd5""""\xdd""""\xde""";
const char RU_SCREEN_VIEW_STATS_TEXT3[] PROGMEM         = """\xbd""""\xd5"" ""\xd2""""\xeb""""\xdf""""\xde""""\xdb""""\xdd""""\xd5""""\xdd""""\xde""";
const char RU_SCREEN_BASE_ERROR_TEXT[] PROGMEM          = """\xbf""""\xde""""\xd4""""\xdb""""\xde""""\xd6""""\xda""""\xd0"" ""\xdd""""\xd5"" ""\xde""""\xd1""""\xdd""""\xd0""""\xe0""""\xe3""""\xd6""""\xd5""""\xdd""""\xd0""";
const char RU_SCREEN_PTFE_TITLE[] PROGMEM               = """\xdd""""\xd0""""\xdf""""\xde""""\xdc""""\xd8""""\xdd""""\xd0""""\xdd""""\xd8""""\xd5""";
const char RU_SCREEN_PTFE_TEXT[] PROGMEM                = """\xb8""""\xd7""""\xdc""""\xd5""""\xdd""""\xd5""""\xdd""""\xd8""""\xd5"" ""\xbf""""\xc2""""\xc4""""\xcd"" ""\xe2""""\xe0""""\xe3""""\xd1""""\xda""""\xd0"" ""\xe7""""\xd5""""\xe0""""\xd5""""\xd7"" ""\xda""""\xd0""""\xd6""""\xd4""""\xeb""""\xd5"" 250 ""\xe7""""\xd0""""\xe1""""\xde""""\xd2""";

#endif //LANGUAGE_RU_H