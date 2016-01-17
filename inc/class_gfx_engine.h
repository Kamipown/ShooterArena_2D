#pragma once

#include "class_engine.h"

class class_gfx_engine
{
	private:
		SDL_Window *window;

	protected:
		class_game *parent;
		void process_event(class_engine_event &e);

	public:
		class_gfx_engine(class_game *m_parent);
		~class_gfx_engine(void);

		void frame(void);
};