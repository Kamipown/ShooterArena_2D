#include "class_gfx_window.h"

class_gfx_window::class_gfx_window(void)
{
	this->update_screen_infos();
	this->create_window(this->screen_width, this->screen_height);
	this->update_window_infos();
	this->set_window_mode(FULLSCREEN);
}

class_gfx_window::~class_gfx_window(void)
{
	SDL_DestroyWindow(this->window);
}

void	class_gfx_window::create_window(const int x, const int y)
{
	this->window = SDL_CreateWindow(GAME_NAME, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, 0);
	if (!this->window)
	{
		std::cerr << "Window creation failed: " << SDL_GetError() << std::endl;
		exit(EXIT_FAILURE);
	}
}


void	class_gfx_window::update_window_infos(void)
{
	SDL_DisplayMode mode;

	if (SDL_GetWindowDisplayMode(this->window, &mode) == 0)
	{
		this->window_width = mode.w;
		this->window_height = mode.h;
		this->window_ips = mode.refresh_rate;
	}
	else
	{
		this->window_width = 800;
		this->window_height = 600;
		this->window_ips = 59;
	}
}

void	class_gfx_window::update_screen_infos(void)
{
	SDL_DisplayMode mode;

	if (SDL_GetDesktopDisplayMode(0, &mode) == 0)
	{
		this->screen_width = mode.w;
		this->screen_height = mode.h;
		this->screen_ips = mode.refresh_rate;
	}
	else
	{
		this->screen_width = 800;
		this->screen_height = 600;
		this->screen_ips = 59;
	}
}

void	class_gfx_window::set_window_mode(const bool mode)
{
	if (this->window_mode == FULLSCREEN && mode == WINDOWED)
	{
		SDL_SetWindowFullscreen(this->window, 0);
		this->window_mode = WINDOWED;
	}
	else if (this->window_mode == WINDOWED && mode == FULLSCREEN)
	{
		SDL_SetWindowFullscreen(this->window, SDL_WINDOW_FULLSCREEN);
		this->window_mode = FULLSCREEN;
	}
}

void	class_gfx_window::switch_window_mode(void)
{
	if (this->window_mode == FULLSCREEN)
		SDL_SetWindowFullscreen(this->window, 0);
	else
		SDL_SetWindowFullscreen(this->window, SDL_WINDOW_FULLSCREEN);
	this->window_mode = !this->window_mode;
}