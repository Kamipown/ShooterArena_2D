#include "class_game.h"
#include <SDL2/SDL.h>

class_game::class_game()
{
	SDL_SetMainReady();
	if (SDL_Init(0) != 0)
	{
		printf("SDL_Init failed: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}

    this->game_running = true;
    
    this->game_engine = new class_game_engine(this);
    this->gfx_engine = new class_gfx_engine(this);
    this->sfx_engine = new class_sfx_engine(this);

    this->game_engine->attach_gfx_engine(gfx_engine);
    this->game_engine->attach_sfx_engine(sfx_engine);

    this->gfx_engine->attach_game_engine(game_engine);
    this->gfx_engine->attach_sfx_engine(sfx_engine);
    
    this->sfx_engine->attach_game_engine(game_engine);
    this->sfx_engine->attach_gfx_engine(gfx_engine);
}

class_game::~class_game()
{
	SDL_Quit();
    this->l_modules.clear();
}

void class_game::game_run(){
    while(game_running){
        game_engine->frame();
        gfx_engine->frame();
        sfx_engine->frame();
    }
}

void class_game::game_stop(){
    this->game_running = false;
}
