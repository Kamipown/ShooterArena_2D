#pragma once

enum e_game_actions { quit_game=1 };

#include "class_engine_event.h"

class class_game_engine_event
    : public class_engine_event
{
    private:

        int player_id;
        e_game_actions action;

    public:

        class_game_engine_event(int m_player_id, e_game_actions m_action);
        ~class_game_engine_event();

        e_game_actions get_action();
        int get_player_id();

};
