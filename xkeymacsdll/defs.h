#pragma once

const int MAX_APP = 64;
const int NONE = 0x0, SHIFT = 0x1, CONTROL = 0x2, META = 0x4, CONTROLX = 0x8,
	   MAX_COMMAND_TYPE = NONE + SHIFT + CONTROL + META + CONTROLX + 1;
const int /* WIN_SHIFT = 0x100, */ WIN_CTRL = 0x200, WIN_ALT = 0x400, WIN_WIN = 0x800;
const int MAX_KEY = 256;
const int MAX_FUNCTION = 64;
const int MAX_DEFINITION = 256;

const int WINDOW_NAME_LENGTH = 128;
const int CLASS_NAME_LENGTH = 128;
const int SUB_KEY_NAME_LENGTH = 128;
const int WINDOW_TEXT_LENGTH = WINDOW_NAME_LENGTH * 2 + 3;

enum ICON_TYPE { MAIN_ICON, CX_ICON, MX_ICON, META_ICON, SHIFT_ICON, CTRL_ICON, ALT_ICON, MAX_ICON_TYPE };
enum XKEYMACS_STATUS { STATUS_ENABLE, STATUS_DISABLE_TMP, STATUS_DISABLE_WOCQ, STATUS_DISABLE, MAX_STATUS };
enum { OFF_ICON, ON_ICON };

enum SETTING_STYLE { SETTING_DEFAULT, SETTING_SPECIFIC, SETTING_DISABLE, SETTING_UNDEFINED };
enum GOTO { GOTO_DO_NOTHING, GOTO_HOOK, GOTO_RECURSIVE, GOTO_HOOKX, GOTO_HOOK0_9, CONTINUE };

struct KeyName
{
	BYTE bVk;
	LPCTSTR name;
};

struct KeyBind
{
	int nType;
	BYTE bVk;
	int nControlID;
};

