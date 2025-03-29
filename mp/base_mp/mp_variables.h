#ifndef MP_VARIABLES_H
#define MP_VARIABLES_H

/*?
	mp_variables.h copyright @valuewardgames 2025 
		-Praise The Lord-
	File Created : Saturday, March 29th
?*/

#include <array>//array
#include <stack>//stack list
#include <list>//list
#include <cmath>//math
#include <string>//string literal ? string

//base health
#define BASE_HEALTH 150
//max damage with a gun in mp possible
#define BASE_MAX_DAMAGE 120
//max strings in a players name
#define BASE_MAX_PLAYER_CHAR 1000

//game define macro for mp
#define gamefunc void
#define bin virtual
#define determine bool
#define boolean bool

class MultiplayerVariables {
public:
	MultiplayerVariables();
	~MultiplayerVariables();

	//no funcs should be in here just mp variables
	//create timer 
	bin gamefunc CreateTimer() = 0;

	//player health
	std::float_t mp_player_health[150];
	//damage
	determine mp_player_hit_box_triggered;
	//take
	boolean mp_player_damaged;
	//nametag
	std::string mp_player_nametag;
	//died
	boolean mp_player_no_status;
	//respawn
	determine mp_match_respawn_player;
	//respawned
	boolean mp_player_respawned;
	//allied
	boolean mp_player_allied;
	//axised
	boolean mp_player_axised;
	//id
	int mp_player_team_id;

};

#endif