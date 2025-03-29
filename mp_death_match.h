#ifndef MP_DEATH_MATCH_H
#define MP_DEATH_MATCH_H

#include "mp/base_mp/mp_variables.h"

std::float_t mp_death_match_player_health[];

gamefunc mp_dm_health(MultiplayerVariables& mp_var()) {
	for (;;) {
		mp_death_match_player_health[NULL] = mp_var().mp_player_health[145];
	}
};

#endif