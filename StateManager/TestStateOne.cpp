#include "TestStateOne.h"

TestStateOne::TestStateOne(void)
{
	std::cout << "\nTestStateOne has just been pushed into the StateManager\n";
}

TestStateOne::~TestStateOne(void)
{
}

void TestStateOne::Init()
{
	std::cout << "We are in the Initialize function of TestStatOne\n" ;
}

void TestStateOne::Frame()
{
	std::cout << "We are in the Frame function of TestStatOne\n" ;
}

void TestStateOne::Render()
{
	std::cout << "We are in the Render function of TestStatOne\n" ;
}

void TestStateOne::Shutdown()
{
	std::cout << "We are in the Shutdown function of TestStatOne\n" ;
}