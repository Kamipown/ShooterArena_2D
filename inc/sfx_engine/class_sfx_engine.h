
#pragma once

#include "class_engine.h"
#include "e_sfx_sounds.h"
#include "e_sfx_actions.h"
#include "class_sfx_engine_event.h"
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <SDL2/SDL.h>


class class_sfx_engine : public class_engine{
    
private:
	static const std::string SOUNDS_INI_FILE;

	std::map<e_sfx_sounds, std::string> map_sounds;

	void load_sounds();
	void initialize_SDL(void);
	void play_sound(e_sfx_sounds sound);
	void stop_sound(e_sfx_sounds sound);
	void pause_sound(e_sfx_sounds sound);

    protected:
         void process_event(class_engine_event &e);

	public:
		class_sfx_engine(class_game* m_parent);
		~class_sfx_engine(void);
		void frame(void);
};

