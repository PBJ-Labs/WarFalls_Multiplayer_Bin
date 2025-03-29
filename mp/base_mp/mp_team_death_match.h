#ifndef MP_TEAM_DEATH_MATCH_H
#define MP_TEAM_DEATH_MATCH_H

#include "base_mp/mp_variables.h"

//pointer base
MultiplayerVariables * mp_element;
std::float_t mp_tdm_player_health[];

//tdm player health
gamefunc mp_tdm_health(MultiplayerVariables& mp_var()) {
	for (;;) {
		mp_tdm_player_health[NULL] = mp_var().mp_player_health[150];
	}
};


#endif