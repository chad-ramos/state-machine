#include "StateManager.h"

//-----------------------------------------------------------------------------
// Push a function on to the state manager stack.
//-----------------------------------------------------------------------------
void StateManager::Push(State *state)
{
	m_stateList.push_back( state );
	m_stateList.back().Init();
}

//-----------------------------------------------------------------------------
// Pop a function off the top of state manager stack.
//-----------------------------------------------------------------------------
bool StateManager::Pop()
{
	m_stateList.back().Shutdown();
	m_stateList.pop_back();

	return !m_stateList.empty();
}

//-----------------------------------------------------------------------------
// Clear the whole state manager stack.
//-----------------------------------------------------------------------------
void StateManager::PopAll()
{
	while( Pop() == true );
}

//-----------------------------------------------------------------------------
// Process the logic.
//-----------------------------------------------------------------------------
bool StateManager::Frame()
{ 
	if( m_stateList.empty() )
		return false;

	// Process the top-most state
	m_stateList.back().Frame(); 

	return true;
}

//-----------------------------------------------------------------------------
// Render current state.
//-----------------------------------------------------------------------------
bool StateManager::Render()
{ 
	if( m_stateList.empty() )
		return false;

	// Process the top-most state
	m_stateList.back().Render(); 

	return true;
}