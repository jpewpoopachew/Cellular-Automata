#include "Game of Life/gameoflife.h"
#include "application.h"

int main()
{
	start:
	Application application;
	
	std::cout << "Choose a Cellular Automaton:" << std::endl
			  << "[1] Game of Life"				<< std::endl
			  << "[2] Brian's Brain"			<< std::endl << std::endl
			  << "Choice: ";

	int choice;
	std::cin >> choice;

	std::cout << "__________________________________________________" << std::endl << std::endl;

	switch (choice)
	{
	case 1:
	{
		GameOfLife cellularAutomaton;
		application.run(cellularAutomaton);
		break;
	}
	case 2:
	{
		BriansBrain cellularAutomaton;
		application.run(cellularAutomaton);
		break;
	}
	default:
		return 0;
	}

	goto start;

	return 0;
}
