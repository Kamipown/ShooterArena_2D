#include "class_sfx_engine.h"
#include <sstream>

const std::string class_sfx_engine::SOUNDS_INI_FILE = "/ini/sounds.ini";

class_sfx_engine::~class_sfx_engine(void)
{
	SDL_QuitSubSystem(SDL_INIT_AUDIO);
}



void class_sfx_engine::load_sounds()
{
	std::ifstream inFile;

	inFile.open(SOUNDS_INI_FILE.c_str());
	
	if (inFile.is_open()){
		
		std::string line;
		while (getline(inFile, line, '\n'))
		{			
			std::stringstream dosString;
			dosString << line;
			
			int sound_id;
			std::string path;

			dosString >> sound_id >> path;
			e_sfx_sounds sound = static_cast<e_sfx_sounds>(sound_id);
			sound = sound;
			std::cout << path << std::endl;
			this->map_sounds[sound] =  path;
			
		}
		
		inFile.close();
		
	}
	else
	{
		std::cout << "Reading file" << SOUNDS_INI_FILE << "failed" << std::endl;
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

class_sfx_engine::class_sfx_engine(class_game * m_parent) : class_engine(m_parent)
{
	
	this->initialize_SDL();
	this->load_sounds();
	
}

void class_sfx_engine::frame(void)
{
	
	this->process_events();
	
}


void class_sfx_engine::process_event(class_engine_event &e)
{
	class_sfx_engine_event &re = static_cast<class_sfx_engine_event&>(e);
	re = re;
	e_sfx_sounds sound = re.get_sound();
	e_sfx_actions action = re.get_action();
	switch (action)
	{
	case play:
		this->play_sound(sound);
		break;
	case stop:
		this->stop_sound(sound);
		break;
	case pause:
		this->pause_sound(sound);
		break;
	}

}



void class_sfx_engine::play_sound(e_sfx_sounds sound)
{
	sound = sound;
}

void class_sfx_engine::stop_sound(e_sfx_sounds sound)
{
	sound = sound;
}

void class_sfx_engine::pause_sound(e_sfx_sounds sound)
{
	sound = sound;
}



