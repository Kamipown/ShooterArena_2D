#pragma once

#include "class_engine.h"

class class_game_engine
    : public class_engine
{
	protected:
		void process_event(class_engine_event &e);

	public:
		class_game_engine(class_game* m_parent);
		~class_game_engine(void);

		void frame(void);
};
