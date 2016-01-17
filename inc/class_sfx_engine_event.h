#include "class_engine_event.h"
#include "e_sfx_actions.h"
#include "e_sfx_actions.h"

class class_sfx_engine_event : public class_engine_event{

private:
	e_sfx_actions action;
	e_sfx_sounds sound;


public:

	class_sfx_engine_event(e_event_type type, e_sfx_actions m_action, e_sfx_sounds m_sound);
};
