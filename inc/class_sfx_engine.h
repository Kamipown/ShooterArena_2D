#pragma once

#include "class_engine.h"
#include "e_sfx_sounds.h"

class class_sfx_engine : public class_engine{
    
private:
	const string SOUNDS_INI_FILE = "/ini/sounds.ini";

	boost::map<e_sfx_sounds, SDL2_sound> map_sounds;

	void load_sounds(void);
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

