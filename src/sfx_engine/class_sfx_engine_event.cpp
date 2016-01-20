

#include "class_sfx_engine_event.h"




class_sfx_engine_event::class_sfx_engine_event(e_sfx_actions m_action,e_sfx_sounds m_sound)
{
	this->action = m_action;
	this->sound = m_sound;
}

e_sfx_actions class_sfx_engine_event::get_action(void)
{
	return this->action;
}

e_sfx_sounds class_sfx_engine_event::get_sound(void)
{
	return this->sound;
}
