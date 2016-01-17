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
	ifstream inFile;

	inFile.open(SOUNDS_INI_FILE);

	if (inFile.is_open){

		std::string line;

		while (getline(inFile, line, '\n'))
		{			
			stringstream dosString;
			dosString << line;

			e_sfx_sounds sound;
			std::string path;

			dosString >> sound >> path;
			map_sounds.add(sound,Mix_Music(path));
		}

		inFile.close();
	}
	else
	{
		printf("Reading file '%s' failed\n", SOUNDS_INI_FILE);
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


