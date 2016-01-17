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

    public:

        class_game();
        ~class_game();

        void game_stop();
};

