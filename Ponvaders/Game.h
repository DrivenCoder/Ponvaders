#pragma once
#include <SFML\Graphics.hpp>

class Game
{
public:
	Game();
	void run();

private:
	void processEvents();
	void update();
	void render();

private:
	sf::RenderWindow gameWindow;

	// Background
	sf::Texture bgTexture;
	sf::Sprite bgSprite;
};