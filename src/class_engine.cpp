#include "class_engine.h"
#include "class_game_engine_event.h"
#include <iostream>
#include "class_game_engine.h"
#include "class_gfx_engine.h"
#include "class_sfx_engine.h"

class_engine::class_engine(class_game* m_parent):
    parent(m_parent)
{    
}

class_engine::~class_engine()
{
}

void class_engine::push_event(class_engine_event* e){
    this->q_events.push(e);
}

void class_engine::process_events(){
    class_engine_event* e;
    while(!q_events.empty()){
        e = this->q_events.front();
        this->process_event(e);
        this->q_events.pop();
    }
}

void class_engine::send_to_game(class_engine_event* e){
    game_engine->push_event(e);
}

void class_engine::send_to_gfx(class_engine_event* e){
    gfx_engine->push_event(e);
}

void class_engine::send_to_sfx(class_engine_event* e){
    sfx_engine->push_event(e);
}
