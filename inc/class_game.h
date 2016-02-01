#pragma once

#include <list>
#include "class_engine.h"
#include "class_game_engine.h"
#include "class_gfx_engine.h"
#include "class_sfx_engine.h"

class class_game
{

    private:

        std::list<class_engine*> l_modules;

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

