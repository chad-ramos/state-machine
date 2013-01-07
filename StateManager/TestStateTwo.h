#pragma once
#include "State.h"
#include <string>
#include <iostream>

class TestStateTwo : public State
{
public:
	void Init();
	void Frame();
	void Render();
	void Shutdown();

	TestStateTwo(void);
	~TestStateTwo(void);
};
