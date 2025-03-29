#ifndef MP_PLAYER_H
#define MP_PLAYER_H

//priase be to the lord
#include "mp/base_mp/mp_variables.h"

class MpPlayer {
public:
	MpPlayer();
	~MpPlayer();

				std::float_t mp_player_def_health;
				std::string mp_player_user_tag;

				std::char_traits<char*>mp_player_head_vmodel;
				std::char_traits<char*>mp_player_torso_vmodel;
				std::char_traits<char*>mp_player_legs_vmodel;
				std::char_traits<char*>mp_player_weapon_vmodel;

				std::float_t Player_Rigbone_Count;

				int mp_player_user_rank;

				gamefunc SpawnPlayer( gamefunc );
				gamefunc PlayerClass_List( gamefunc );

				std::stack<int>g_nMpPlayer_GameRank_Id();
};

#endif