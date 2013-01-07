#pragma once

#include "State.h"
#include <boost/ptr_container/ptr_vector.hpp>

class StateManager{
protected:
	boost::ptr_vector < State > m_stateList;

public:
	void Push( State *state );
	bool Pop();
	void PopAll();
	bool Frame();
	bool Render();
};