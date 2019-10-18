//
// Created by tristochi on 10/11/19.
//

#ifndef PONG_BALL_H
#define PONG_BALL_H
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball
{
private:
    Vector2f position;
    // A RectangleShape object that will be the ball

    RectangleShape ballShape;

    float xVelocity = .7f;
    float yVelocity = .7f;

public:
    Ball();

    FloatRect getPosition();

    RectangleShape getShape();

    float getXVelocity();

    void reboundTop();

    void reboundBat();

    void hitBottom();

    void score();

    void update();
};

#endif //PONG_BALL_H
