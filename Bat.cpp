//
// Created by tristochi on 10/11/19.
//

#include "Bat.h"

// This is a constructor
Bat::Bat(float startX, float startY)
{
    position.x = startX;
    position.y = startY;

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

void Bat::update()
{
    batShape.setPosition(position);
}





