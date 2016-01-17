#include "class_game_engine.h"
#include <iostream>

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
}

void class_game_engine::process_event(class_engine_event &e){
    e=e;
}

