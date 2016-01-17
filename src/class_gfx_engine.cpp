#include "class_gfx_engine.h"

class_gfx_engine::class_gfx_engine(class_engine *m_parent): parent(m_parent)
{

}

class_gfx_engine::~class_gfx_engine(void)
{

}

void class_gfx_engine::frame(void)
{
	this->process_events();
}

void class_gfx_engine::process_event(class_engine_event &e)
{
	
}