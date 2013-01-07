#include "State.h"

//-----------------------------------------------------------------------------
// The state class constructor.
//-----------------------------------------------------------------------------
State::State(void)
{
}

//-----------------------------------------------------------------------------
// The state class destructor.
//-----------------------------------------------------------------------------
State::~State(void)
{
}

//-----------------------------------------------------------------------------
// Allows state to perform logical operations
//-----------------------------------------------------------------------------
void State::Frame()
{
}

//-----------------------------------------------------------------------------
// Allows state to initialize state specific variables
//-----------------------------------------------------------------------------
void State::Init()
{
}

//-----------------------------------------------------------------------------
// Allows state to Render to screen
//-----------------------------------------------------------------------------
void State::Render()
{
}

//-----------------------------------------------------------------------------
// Allows state to do state specific clean-up
//-----------------------------------------------------------------------------
void State::Shutdown()
{
}