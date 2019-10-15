//
// Created by tristochi on 10/11/19.
//

#ifndef PONG_BAT_H
#define PONG_BAT_H
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bat
{
private:
    Vector2f position;

    //Rectangle object
    RectangleShape batShape;

    float batSpeed = 4.5f;

public:
    Bat(float startX, float startY);

    FloatRect getPosition();

    RectangleShape getShape();

    void moveUp();
    void moveDown();
    void update();
};


#endif //PONG_BAT_H
