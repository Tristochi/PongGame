#include "PlayerTwo.h"
#include"Constants.h"	

PlayerTwo::PlayerTwo()
{
	position.x = (windowWidth - 20);
	position.y = (windowHeight / 2);
	batShape.setSize(sf::Vector2f(5, 50));
	batShape.setPosition(position);
}

FloatRect PlayerTwo::getPosition()
{
	return batShape.getGlobalBounds();
}

RectangleShape PlayerTwo::getShape()
{
	return batShape;
}

void PlayerTwo::moveUp()
{
	position.y -= batSpeed;
}

void PlayerTwo::moveDown()
{
	position.y += batSpeed;
}

void PlayerTwo::topBoundary()
{
	position.y = 0;
}

void PlayerTwo::bottomBoundary()
{
	position.y = windowHeight - 50;
}

void PlayerTwo::update()
{
	batShape.setPosition(position);
}