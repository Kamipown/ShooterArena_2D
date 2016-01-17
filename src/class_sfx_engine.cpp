#include "class_sfx_engine.h"


class_sfx_engine::~class_sfx_engine(void)
{
	SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

class_sfx_engine::class_sfx_engine(class_game* m_parent) : class_engine(m_parent)
{
	SDL_initialization(void);
	load_sounds(void);
}

void class_sfx_engine::load_sounds(void)
{
	std::ifstream file(SOUNDS_INI_FILE);
	 
	if (file)
	{
		std::stringstream buffer;
		
		buffer << file.rdbuf();

		file.close();

		e_sfx_sounds sound;
		std::string path;
		map_sounds.add(sound, new SDL2_sound(path));
		// operations on the buffer...
	}
	else{

	}
	
}

void class_sfx_engine::initialize_SDL(void)
{
	if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0)
	{
		printf("SDL_INIT_VIDEO failed: %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
}

void class_sfx_engine::frame(void)
{
	this->procces_events();
}

void class_sfx_engine::process_event(class_engine_event &e)
{
	switch (e.action)
	{
	case e_sfx_actions.play:
		this->play_sound(e.sound);
		break;
	case e.sfx_actions.stop:
		this->stop_sound(e.sound);
		break;
	case e.sfx_actions.pause:
		this->pause_sound(e.sound);
		break;
	}
}



void class_sfx_engine::play_sound(e_sfx_sounds sound)
{

}

void class_sfx_engine::stop_sound(e_sfx_sounds sound)
{

}

void class_sfx_engine::pause_sound(e_sfx_sounds sound)
{

}


