#include "../inc/class_engine.h"

class_engine::class_engine(class_game* parent):
    parent(m_parent)
{
    
}

void class_engine::push_event(class_engine_event &e){
    this->q_events.push(e);
}

void class_engine::process_events(){
    class_engine_event &e;
    while(!q_events.empty()){
        e = this->q_events.front();
        this->process_event(e);
        this->q_events.pop();
    }
}
