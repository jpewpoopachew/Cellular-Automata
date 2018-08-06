#include "application.h"

void Application::addQuads()
{
	float x, y;

	sf::Vertex topLeft, topRight, bottomRight, bottomLeft;
	
	for (int i = 0; i < cellCount; i++)
	{
		x = (float)cellSize * getX(i);
		y = (float)cellSize * getY(i);

		topLeft.position     = { x           , y            };
		topRight.position    = { x + cellSize, y            };
		bottomRight.position = { x + cellSize, y + cellSize };
		bottomLeft.position  = { x           , y + cellSize };

		quads.push_back(topLeft);
		quads.push_back(topRight);
		quads.push_back(bottomRight);
		quads.push_back(bottomLeft);
	}
}

void Application::setQuadColour(sf::Color colour, int index)
{
	for (int i = 0; i < 4; i++)
	{
		quads[index * 4 + i].color = colour;
	}
}

void Application::pollEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		switch (event.type)
		{
		case (sf::Event::Closed):
			window.close();
			break;

		default:
			break;
		}
	}
}

