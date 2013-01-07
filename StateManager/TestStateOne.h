#pragma once
#include "State.h"
#include <string>
#include <iostream>

class TestStateOne : public State
{
public:
	void Init();
	void Frame();
	void Render();
	void Shutdown();

	TestStateOne(void);
	~TestStateOne(void);
};
