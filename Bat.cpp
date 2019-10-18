//
// Created by tristochi on 10/11/19.
//

#include "Bat.h"
#include "Constants.h"

// This is a constructor
Bat::Bat()
{    
    batShape.setSize(sf::Vector2f(5, 50));
    batShape.setPosition(position);
}

FloatRect Bat::getPosition()
{
    return batShape.getGlobalBounds();
}

RectangleShape Bat::getShape()
{
    return batShape;
}

void Bat::moveUp()
{
    position.y -= batSpeed;
}

void Bat::moveDown()
{
    position.y += batSpeed;
}

void Bat::topBoundary()
{
	position.y = 0;
}

void Bat::bottomBoundary()
{
	position.y = windowHeight - 50;
}

void Bat::update()
{
    batShape.setPosition(position);
}





