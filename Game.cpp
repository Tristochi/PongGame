#include "Game.h"

Game::Game()
{
	window.create(VideoMode(windowWidth, windowHeight), "Pong");
	window.setFramerateLimit(122);
}

/* Private Functions */
void Game::input()
{
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		window.close();
	}

	/* Player One or Bat One's Movements */

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		bat.moveUp();
	}
	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		if (bat.getPosition().top + 50 > windowHeight)
		{
			bat.bottomBoundary();
		}
		bat.moveDown();
	}

	/* Player Two or Bat Two's Movements */
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		bat2.moveUp();
	}
	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		if (bat2.getPosition().top + 50 > windowHeight)
		{
			bat2.bottomBoundary();
		}
		bat2.moveDown();
	}

	
}

/* Public Functions */
void Game::start()
{
	while (window.isOpen())
	{
		input();
		draw();
		update();
	}
}

