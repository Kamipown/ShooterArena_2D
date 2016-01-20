class class_gfx_engine;

#pragma once

#include "class_engine.h"
#include <stdio.h>
#include <cstdlib>
#include <SDL2/SDL.h>
#include "defs.h"
#include "class_gfx_window.h"

class class_gfx_engine
    : public class_engine
{
	private:
		class_gfx_window	*window;

	protected:
		void process_event(class_engine_event* e);

	public:
		class_gfx_engine(class_game *m_parent);
		~class_gfx_engine(void);

		void frame(void);
};
