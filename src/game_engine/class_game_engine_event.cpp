#include "class_game_engine_event.h"

class_game_engine_event::class_game_engine_event(int m_player_id, e_game_actions m_action)
    : player_id(m_player_id), action(m_action)
{
}

class_game_engine_event::~class_game_engine_event()
{
}

e_game_actions class_game_engine_event::get_action(){
    return this->action;
}

int class_game_engine_event::get_player_id(){
    return this->player_id;
}
