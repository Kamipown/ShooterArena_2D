#include "class_game.h"

class_game::class_game(){
   boost::mutex::scoped_lock m(this->game_running);
   this->game_running = true; 
}

class_game::~class_game(){
    std::list<class_engine*>::iterator it;
    for(it = this->l_modules.begin(); it != this->l_modules.end(); it++){
        delete it;        
    }
}

void class_game::game_stop(){
    boost::mutex::scoped_lock m(this->game_running);
    this->game_running = false;
}
