#ifndef PONG_PLAYERONE_H
#define PONG_PLAYERONE_H
#pragma once
#include <SFML/Graphics.hpp>
#include "Bat.h"

class PlayerOne
{
private:
	Vector2f position;
	RectangleShape batShape;

	float batSpeed = 4.5f;

public:
	PlayerOne();
	FloatRect getPosition();

	RectangleShape getShape();

	void moveUp();
	void moveDown();
	void topBoundary();
	void bottomBoundary();
	void update();
};


#endif //PONG_PLAYERONE_H