#include "class_sfx_engine.h"

static void			initialization(Uint32 flags)
{
	SDL_SetMainReady();
	if (SDL_Init(flags) != 0)
	{
		printf("SDL_Init failed: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
}

class_sfx_engine::class_sfx_engine(class_game* m_parent) : class_engine(m_parent){

}

void class_sfx_engine::frame(){
	this->procces_events();
}



void class_sfx_engine::process_event(class_engine_event &e){
	
}


