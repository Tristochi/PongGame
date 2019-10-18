#ifndef PONG_PLAYERTWO_H
#define PONG_PLAYERTWO_H
#pragma once
#include "Bat.h"
#include <SFML/Graphics.hpp>


class PlayerTwo
{
private:
	Vector2f position;
	RectangleShape batShape;

	float batSpeed = 4.5f;

public:
	PlayerTwo();
	FloatRect getPosition();

	RectangleShape getShape();

	void moveUp();
	void moveDown();
	void topBoundary();
	void bottomBoundary();
	void update();
};

#endif //PONG_PLAYERTWO_H
