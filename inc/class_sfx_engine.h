#pragma once

#include "class_engine.h"


class class_sfx_engine{
    
    public:
		class_sfx_engine(class_game* m_parent);
		~class_sfx_engine();
        void frame();
    protected:
         void process_event(class_engine_event &e);

};

