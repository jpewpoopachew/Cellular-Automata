/**
	main.cpp
	Purpose: TODO

	@author Joshua Varga
	@version 2.0
*/

#include "application.h"

int main()
{
start:

	Application application;
	
	unsigned short int NUM_CHOICES = 3, choice;

	std::cout << "Choose a Cellular Automaton:\n"
			  << "[1] Brian's Brain\n"
			  << "[2] Custom\n"
		   	  << "[" << NUM_CHOICES << "] Exit\n\n"
			  << "Choice: ";

	std::cin  >> choice;
	std::cout << "\n__________________________________________________\n";

	switch (choice)
	{
		case 1:
		{
			application.run<BriansBrain>();
			break;
		}

		case 2:
		{
			application.run<Custom>();
			break;
		}

		default:
		{
			exit(0);
		}
	}

	goto start;

	return 0;
}
