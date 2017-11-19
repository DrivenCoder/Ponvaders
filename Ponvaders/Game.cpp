#include "Game.h"

Game::Game()
	:gameWindow(sf::VideoMode(800, 600), "Ponvaders")
{

}

void Game::run()
{
	while (gameWindow.isOpen())
	{
		processEvents();
		update();
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;

	while (gameWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			gameWindow.close();
	}
}

void Game::update()
{
	// Update here later
}

void Game::render()
{
	gameWindow.clear();
	// Draw here later
	gameWindow.display();
}