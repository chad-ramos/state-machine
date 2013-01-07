#include "TestStateTwo.h"

TestStateTwo::TestStateTwo(void)
{
	std::cout << "\nTestStateTwo has just been pushed into the StateManager\n";
}

TestStateTwo::~TestStateTwo(void)
{
}

void TestStateTwo::Init()
{
	std::cout << "We are in the Initialize function of TestStateTwo\n" ;
}

void TestStateTwo::Frame()
{
	std::cout << "We are in the Frame function of TestStateTwo\n" ;
}

void TestStateTwo::Render()
{
	std::cout << "We are in the Render function of TestStateTwo\n" ;
}

void TestStateTwo::Shutdown()
{
	std::cout << "We are in the Shutdown function of TestStateTwo\n" ;
}