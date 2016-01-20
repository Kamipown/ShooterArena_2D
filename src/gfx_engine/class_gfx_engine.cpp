#include "class_gfx_engine.h"

static void			init_sdl_video(void)
{
	if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0)
	{
		std::cerr << "Video initialization failed: " << SDL_GetError() << std::endl;
		exit(EXIT_FAILURE);
	}
}

class_gfx_engine::class_gfx_engine(class_game *m_parent): class_engine(m_parent)
{
	init_sdl_video();
	window = new (class_gfx_window);
}

class_gfx_engine::~class_gfx_engine(void)
{
	SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

void class_gfx_engine::frame(void)
{
    SDL_Delay(3000);
	this->process_events();
}

void class_gfx_engine::process_event(class_engine_event &e)
{
    e=e;   
}
