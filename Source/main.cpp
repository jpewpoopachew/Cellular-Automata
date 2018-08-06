#include "Game of Life/gameoflife.h"
#include "application.h"

int main()
{
	start:
	Application application;
	
	std::cout << "Choose a Cellular Automata:" << std::endl
			  << "[1] Game of Life"			   << std::endl
			  << "[2] Brian's Brain"		   << std::endl << std::endl;

	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
	{
		GameOfLife cellularAutomata;
		application.run(cellularAutomata);
		break;
	}
	case 2:
	{
		BriansBrain cellularAutomata;
		application.run(cellularAutomata);
		break;
	}
	default:
		return 0;
	}

	goto start;

	return 0;
}
