#include "class_sfx_engine.h"



class_sfx_engine::class_sfx_engine(class_game* m_parent) : class_engine(m_parent){

}

void class_sfx_engine::frame(){
	this->procces_events();
}



void class_sfx_engine::process_event(class_engine_event &e){
	
}


