#include <string>
#include <iostream>

#include "StateManager.h"
#include "TestStateOne.h"
#include "TestStateTwo.h"

//-----------------------------------------------------------------------------
// Entry point for the application.
//-----------------------------------------------------------------------------
int main ( )
{
	// Create our state manager.
	StateManager stateManager;

	// Push a new TestStateOne object into our stateManager object.
	// When we do this the state manager internally calls the
	// Init() function of the state being pushed in. 
	stateManager.Push( new TestStateOne ( ) );
	
	// The frame() function of the stateManager object calls the 
	// frame() function of the current state.  This is the place 
	// where all logical syntax will be executed. 
	stateManager.Frame();

	// The render() function of the stateManager object calls the
	// render() function of the current state.  This is the place
	// where all rendering syntax will be executed.
	stateManager.Render();

	// We now are pushing a TestStateTwo object into our stateManager 
	// object.  The testStateOne object still exist inside our
	// stateManager. Because the testStateTwo object is at the top
	// of the internal stateManager vector container, it takes focus. 
	stateManager.Push( new TestStateTwo ( ) );
	stateManager.Frame();
	stateManager.Render();

	// We now are removing the current state from stateManager.
	// This means testStateOne is back in focus.  This is where
	// any custom shutdown syntax would go.
	stateManager.Pop();

	// For demonstration purposes we are going to go ahead and 
	// push a new TestStateTwo object into the stateManager.
	stateManager.Push( new TestStateTwo ( ) );

	// By calling this function we are going to be removing both
	// the testStateOne object and the testStateTwo object from 
	// our stateManager.
	stateManager.PopAll();

	return 0;
}
