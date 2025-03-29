
//praise be to the lord

#ifndef MP_SERVER_H
#define MP_SERVER_H

#include "mp/base_mp/mp_variables.h"
#include "mp_player/mp_player.h"

#define kick delete

namespace Server {

	class ServerSocket {
		public:
			ServerSocket();
			~ServerSocket();

			std::float_t mp_server_ping_status;
			std::float_t mp_server_timer_runtime_enable_link;
			std::string mp_server_name;
			std::int64_t mp_max_players_t_server;
			
			int server_mode(gamefunc);

			boolean Server_Registered;
			boolean User_ClckedServer_Name;
			
			gamefunc ServerConnectPlayer(MpPlayer *pPlayer);

			gamefunc ServerDisconnectPlayer(MpPlayer* pPlayer);

						gamefunc ServerPrintMessage(std::string* mp_server_msg);




	};

};

#endif