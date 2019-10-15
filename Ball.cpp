//
// Created by tristochi on 10/11/19.
//

#include "Constants.h"
#include "Ball.h"

Ball::Ball(float startX, float startY)
{
    position.x = startX;
    position.y = startY;

    ballShape.setSize(sf::Vector2f(10,10));
    ballShape.setPosition(position);
}

FloatRect Ball::getPosition()
{
    return ballShape.getGlobalBounds();
}

RectangleShape Ball::getShape()
{
    return ballShape;
}

float Ball::getXVelocity()
{
    return xVelocity;
}

void Ball::reboundTop()
{
    yVelocity = -yVelocity;
}

void Ball::reboundBat()
{
    position.x -= (xVelocity  * 30);
    xVelocity = -xVelocity;
}

void Ball::hitBottom()
{
    yVelocity = -yVelocity;
    position.y = windowHeight - 10;
}

void Ball::score()
{
    position.y = windowWidth / 2;
    position.x = windowHeight / 2;
}


void Ball::update()
{
    // Updates the ball position variables
    position.y += yVelocity;
    position.x += xVelocity;

    // Move the ball and the bat
    ballShape.setPosition(position);

}


