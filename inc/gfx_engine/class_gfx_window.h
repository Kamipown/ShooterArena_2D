class class_gfx_window;

#pragma once

#include <SDL2/SDL.h>
#include "defs.h"

class class_gfx_window
{
	private:
		SDL_Window	*window;

		int			window_width;
		int			window_height;
		int			window_ips;
		bool		window_mode;

		int			screen_width;
		int			screen_height;
		int			screen_ips;

		void		create_window(const int x, const int y);
		void		update_window_infos(void);
		void		update_screen_infos(void);

	public:
		class_gfx_window(void);
		~class_gfx_window(void);

		void		set_window_mode(const bool mode);
		void		switch_window_mode(void);

};