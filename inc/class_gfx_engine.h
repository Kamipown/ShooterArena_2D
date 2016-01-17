#pragma once

#include "class_engine.h"

class class_gfx_engine
{
	private:
		SDL_Window *window;

	protected:
		class_engine *parent;

	public:
		class_gfx_engine(class_engine *m_parent);
		~class_gfx_engine(void);
};