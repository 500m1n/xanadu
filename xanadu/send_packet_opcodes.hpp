//

#pragma once

namespace send_headers_login
{
	constexpr short kLoginStatus = 0x00;
	constexpr short kSERVER_STATUS = 0x03;
	constexpr short kPIN_CHECK_OPERATION = 0x06;
	constexpr short kSERVER_LIST = 0x0a;
	constexpr short kCHARACTER_LIST = 0x0b;
	constexpr short kSERVER_IP = 0x0c;
	constexpr short kCHECK_CHARACTER_NAME = 0x0d;
	constexpr short kCREATE_NEW_CHARACTER = 0x0e;
	constexpr short kDELETE_CHARACTER = 0x0f;
	constexpr short kCHANGE_CHANNEL = 0x10;
	constexpr short kCHANNEL_SELECTED = 0x14;
	constexpr short kRELOG_RESPONSE = 0x16;
}

namespace send_headers
{
	constexpr short kMODIFY_INVENTORY_ITEM = 0x1D;
	constexpr short kUPDATE_STATS = 0x1F;
	constexpr short kGIVE_BUFF = 0x20;
	constexpr short kCANCEL_BUFF = 0x21;
	constexpr short kUPDATE_SKILLS = 0x24;
	constexpr short kFAME = 0x26;
	constexpr short kSHOW_STATUS_INFO = 0x27;
	constexpr short kSHOW_QUEST_COMPLETION = 0x31;
	constexpr short kREQUEST_HIRED_MERCHANT = 0x32;
	constexpr short kUSE_SKILL_BOOK = 0x33;
	constexpr short kGUILD_BBS_OPERATION = 0x3B;
	constexpr short kCHAR_INFO = 0x3D;
	constexpr short kPARTY_OPERATION = 0x3E;
	constexpr short kBUDDY_LIST = 0x3F;
	constexpr short kGUILD_OPERATION = 0x41;
	constexpr short kSPAWN_PORTAL = 0x43;
	constexpr short kSERVERMESSAGE = 0x44;
	constexpr short kSHOW_AVATAR_MEGA = 0x6F;
	constexpr short kWARP_TO_MAP = 0x7D;
	constexpr short kSET_MTS = 0x7E;
	constexpr short kOPEN_CASHSHOP = 0x7F;
	constexpr short kGROUP_CHAT = 0x86;
	constexpr short kWHISPER = 0x87;
	constexpr short kMAP_EFFECT = 0x8A;
	constexpr short kCLOCK = 0x93;
	constexpr short kSPAWN_PLAYER = 0xA0;
	constexpr short kREMOVE_PLAYER_FROM_MAP = 0xA1;
	constexpr short kCHATTEXT = 0xA2;
	constexpr short kCHALKBOARD = 0xA4;
	constexpr short kSHOW_SCROLL_EFFECT = 0xA7;
	constexpr short kPET_SPAWN = 0xA8;
	constexpr short kPET_MOVE = 0xAA;
	constexpr short kPET_CHAT = 0xAB;
	constexpr short kPET_COMMAND = 0xAE;
	constexpr short kSUMMON_SPAWN = 0xAF;
	constexpr short kSUMMON_REMOVE = 0xB0;
	constexpr short kSUMMON_MOVE = 0xB1;
	constexpr short kSUMMON_ATTACK = 0xB2;
	constexpr short kDAMAGE_SUMMON = 0xB3;
	constexpr short kMOVE_PLAYER = 0xB9;
	constexpr short kCLOSE_RANGE_ATTACK = 0xBA;
	constexpr short kRANGED_ATTACK = 0xBB;
	constexpr short kMAGIC_ATTACK = 0xBC;
	constexpr short kENERGY_ATTACK = 0xBD;
	constexpr short kSKILL_EFFECT = 0xBE;
	constexpr short kCANCEL_SKILL_EFFECT = 0xBF;
	constexpr short kDAMAGE_PLAYER = 0xC0;
	constexpr short kFACIAL_EXPRESSION = 0xC1;
	constexpr short kSHOW_ITEM_EFFECT = 0xC2;
	constexpr short kSHOW_CHAIR = 0xC4;
	constexpr short kUPDATE_CHAR_LOOK = 0xC5;
	constexpr short kSHOW_FOREIGN_EFFECT = 0xC6;
	constexpr short kGIVE_FOREIGN_BUFF = 0xC7;
	constexpr short kCANCEL_FOREIGN_BUFF = 0xC8;
	constexpr short kUPDATE_PARTYMEMBER_HP = 0xC9;
	constexpr short kCANCEL_CHAIR = 0xCD;
	constexpr short kSHOW_ITEM_GAIN_INCHAT = 0xCE;
	constexpr short kUPDATE_QUEST_INFO = 0xD3;
	constexpr short kCOOLDOWN = 0xEA;
	constexpr short kSPAWN_MONSTER = 0xEC;
	constexpr short kKILL_MONSTER = 0xED;
	constexpr short kSPAWN_MONSTER_CONTROL = 0xEE;
	constexpr short kMOVE_MONSTER = 0xEF;
	constexpr short kMOVE_MONSTER_RESPONSE = 0xF0;
	constexpr short kSHOW_MONSTER_HP = 0xFA;
	constexpr short kSPAWN_NPC = 0x101;
	constexpr short kSPAWN_NPC_REQUEST_CONTROLLER = 0x103;
	constexpr short kSPAWN_HIRED_MERCHANT = 0x109;
	constexpr short kDESTROY_HIRED_MERCHANT = 0x10A;
	constexpr short kDROP_ITEM_FROM_MAPOBJECT = 0x10C;
	constexpr short kREMOVE_ITEM_FROM_MAP = 0x10D;
	constexpr short kSPAWN_MIST = 0x111;
	constexpr short kREMOVE_MIST = 0x112;
	constexpr short kSPAWN_DOOR = 0x113;
	constexpr short kREMOVE_DOOR = 0x114;
	constexpr short kREACTOR_HIT = 0x115;
	constexpr short kREACTOR_SPAWN = 0x117;
	constexpr short kREACTOR_DESTROY = 0x118;
	constexpr short kMONSTER_CARNIVAL_START = 0x121;
	constexpr short kMONSTER_CARNIVAL_OBTAINED_CP = 0x122;
	constexpr short kMONSTER_CARNIVAL_PARTY_CP = 0x123;
	constexpr short kMONSTER_CARNIVAL_SUMMON = 0x124;
	constexpr short kMONSTER_CARNIVAL_MESSAGE = 0x125;
	constexpr short kMONSTER_CARNIVAL_DIED = 0x126;
	constexpr short kMONSTER_CARNIVAL_LEAVE = 0x127;
	constexpr short kMONSTER_CARNIVAL_SHOW_GAME_RESULT = 0x128;
	constexpr short kNPC_TALK = 0x130;
	constexpr short kOPEN_NPC_SHOP = 0x131;
	constexpr short kCONFIRM_SHOP_TRANSACTION = 0x132;
	constexpr short kOPEN_STORAGE = 0x135;
	constexpr short kFREDRICK_MESSAGE = 0x136;
	constexpr short kFREDRICK_OPERATION = 0x137;
	constexpr short kMESSENGER = 0x139;
	constexpr short kPLAYER_INTERACTION = 0x13A;
	constexpr short kSHOW_CASH = 0x144;
	constexpr short kCASHSHOP_OPERATION = 0x145;
	constexpr short kKEYMAP = 0x14F;
	constexpr short kMTS_SHOW_CASH = 0x15B;
}
