#include "Game.h"

Game::Game()
{
	window.create(VideoMode(windowWidth, windowHeight), "Pong");
	window.setFramerateLimit(122);
	
}

/* Private Functions */
void Game::input()
{
	while (window.pollEvent(event)) 
	{	
		if (Keyboard::isKeyPressed(Keyboard::Escape))
			window.close();
		
	}

	/* Player One or Bat One's Movements */

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		bat.moveUp();
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down))
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
	else if (Keyboard::isKeyPressed(Keyboard::S))
	{
		if (bat2.getPosition().top + 50 > windowHeight)
		{
			bat2.bottomBoundary();
		}
		bat2.moveDown();
	}
	if (ball.getPosition().top + 10 > windowHeight)
	{
		ball.hitBottom();
	}
	if (ball.getPosition().top < 0)
	{
		ball.reboundTop();
	}

	if (ball.getPosition().left < 0 || ball.getPosition().left + 10 > windowWidth)
	{
		ball.score();
	}

	if (ball.getPosition().intersects(bat.getPosition()))
	{
		ball.reboundBat();
	}
	else if (ball.getPosition().intersects(bat2.getPosition()))
	{
		ball.reboundBat();
	}
	
}

void Game::update()
{
	ball.update();
	bat.update();
	bat2.update();

}

void Game::draw()
{
	window.clear(Color(26, 128, 182, 255));
	window.draw(bat.getShape());
	window.draw(bat2.getShape());
	window.draw(ball.getShape());
	window.draw(hud);
	window.display();
}

/* Public Functions */
bool Game::isOpen()
{
	if (window.isOpen())
		return true;
}

void Game::start()
{
	while (window.isOpen())
	{
		input();
		draw();
		update();
	}
}

