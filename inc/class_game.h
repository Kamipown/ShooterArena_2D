#pragma once

#include <list>
#include <boost/thread/mutex.hpp>
#include "class_engine.h"

class class_game
{
    
    private:

        std::list<class_engine*> l_modules;

        boost::mutex mutex_game_running;
        bool game_running;

        class_game_engine* game_engine;
        class_gfx_engine* gfx_engine;
        class_sfx_engine* sfx_engine;
    
    public:

        class_game();
        ~class_game();

        void game_stop();
        void game_run();
};

