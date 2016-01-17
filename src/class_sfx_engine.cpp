#include "class_sfx_engine.h"



class_sfx_engine::class_sfx_engine(class_game* m_parent) : class_engine(m_parent)
{
	load_sounds(void);
}

class_sfx_engine::~class_sfx_engine(void)
{

}

void class_sfx_engine::frame(void){
	this->procces_events();
}

void class_sfx_engine::process_event(class_engine_event &e){

}

void class_sfx_engine::load_sounds(void){
	map_sounds.add(e_sfx_sounds.fire, new SDL2_sound("/rcs/snd/fire.wav"));
	
}

void class_sfx_engine::play_sounds(e_sfx_sounds sound){

}

void class_sfx_engine::stop_sounds(e_sfx_sounds sound){

}

void class_sfx_engine::pause_sounds(e_sfx_sounds sound){

}


