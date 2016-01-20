#include "class_game_engine.h"
#include <iostream>
#include "class_game.h"
#include "class_game_engine_event.h"

class_game_engine::class_game_engine(class_game* m_parent):
    class_engine(m_parent)
{
}

class_game_engine::~class_game_engine()
{
}

void class_game_engine::frame(){
	this->process_events();
    std::cout<<"This is a loop"<<std::endl;
    class_game_engine_event* e = new class_game_engine_event(0, quit_game);
    this->push_event(e);
}

void class_game_engine::process_event(class_engine_event* e){
    
    class_game_engine_event* re = dynamic_cast<class_game_engine_event*>(e);
    int action = re->get_action();
    
    switch(action){
        
        case quit_game:
            std::cout<<"lol"<<std::endl;
            parent->game_stop();
            break;
            
    }
    
    delete e;
}

