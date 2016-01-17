class class_gfx_engine;

#pragma once

#include "class_engine.h"
#include <SDL2/SDL.h>

class class_gfx_engine
    : public class_engine
{
	private:
		SDL_Window *window;

	protected:
		void process_event(class_engine_event &e);

	public:
		class_gfx_engine(class_game *m_parent);
		~class_gfx_engine(void);

		void frame(void);
};
