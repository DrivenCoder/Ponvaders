#include "Game.h"

Game::Game()
	:gameWindow(sf::VideoMode(800, 600), "Ponvaders")
{
	// Set background texture and sprite
	bgTexture.loadFromFile("./assets/graphics/background.png");
	bgTexture.setRepeated(true);
	bgSprite.setTexture(bgTexture);
	bgSprite.setTextureRect(sf::IntRect(0, 0, 800, 600));
}

void Game::run()
{
	while (gameWindow.isOpen())
	{
		/** The Game Loop **/
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
		// If the game window is closed...then close it.
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
	// Draw the background sprite
	gameWindow.draw(bgSprite);
	gameWindow.display();
}