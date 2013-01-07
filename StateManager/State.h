#pragma once

class State
{
public:
	State(void);
	~State(void);

	virtual void Init();
	virtual void Shutdown();
	virtual void Frame();
	virtual void Render();
};
