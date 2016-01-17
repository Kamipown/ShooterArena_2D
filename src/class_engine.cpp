#include "class_engine.h"

class_engine::class_engine(class_game* m_parent):
    parent(m_parent)
{    
}

class_engine::~class_engine()
{
}

void class_engine::push_event(class_engine_event &e){
    this->q_events.push(e);
}

void class_engine::process_events(){
    class_engine_event e;
    while(!q_events.empty()){
        e = this->q_events.front();
        this->process_event(e);
        this->q_events.pop();
    }
}
