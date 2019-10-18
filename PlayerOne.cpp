#include "PlayerOne.h"
#include "Constants.h"

PlayerOne::PlayerOne()
{
	position.x = playerOneX;
	position.y = playerOneY;
	batShape.setSize(sf::Vector2f(5, 50));
	batShape.setPosition(position);
}

FloatRect PlayerOne::getPosition()
{
	return batShape.getGlobalBounds();
}

RectangleShape PlayerOne::getShape()
{
	return batShape;
}

void PlayerOne::moveUp()
{
	position.y -= batSpeed;
}

void PlayerOne::moveDown()
{
	position.y += batSpeed;
}

void PlayerOne::topBoundary()
{
	position.y = 0;
}

void PlayerOne::bottomBoundary()
{
	position.y = windowHeight - 50;
}

void PlayerOne::update()
{
	batShape.setPosition(position);
}
