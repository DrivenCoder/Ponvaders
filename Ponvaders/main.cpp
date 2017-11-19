#include <SFML/Graphics.hpp>

void main()
{
	sf::RenderWindow gameWindow(sf::VideoMode(800, 600), "Test Window");

	while (gameWindow.isOpen())
	{
		sf::Event event;

		while (gameWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				gameWindow.close();
		}

		gameWindow.clear();
		// Draw here later.
		gameWindow.display();
	}
}