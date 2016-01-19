#include "class_gfx_engine.h"

static void			init_sdl_video(void)
{
	if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0)
	{
		printf("SDL_INIT_VIDEO failed: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
}

static SDL_Window	*new_window(int x, int y)
{
	SDL_Window	*window;

	window = SDL_CreateWindow(GAME_NAME, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, 0);
	if (!window)
	{
		printf("SDL_CreateWindow failed: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
	return (window);
}

class_gfx_engine::class_gfx_engine(class_game *m_parent): class_engine(m_parent)
{
	init_sdl_video();
	window = new_window(800, 600);
}

class_gfx_engine::~class_gfx_engine(void)
{
	SDL_DestroyWindow(window);
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
