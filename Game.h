/*
	Created by Tristochi 10/18/2019

	Decided to create this game/engine class because main.cpp was quickly turning into spaghetti
	code and I want to implement a finite state machine to control the start menu, pause menu,
	and game over screen. 
*/
#ifndef PONG_GAME_H
#define PONG_GAME_H
#pragma once
#include "Constants.h"
#include "PlayerTwo.h"
#include "Ball.h"
#include "PlayerOne.h"
#include<string>
#include <SFML/Graphics.hpp>

using namespace sf;

class Game
{
private:

	RenderWindow window;
	PlayerOne bat;
	PlayerTwo bat2;

	Ball ball;


	void input();
	void update();
	void draw();

public:
	// This is the constructor
	Game();

	// Accesses all private functions
	void start();

	// Will execute when game is paused
	void pause();

	// Will execute when a player reaches ten points.
	void gameOver();

};


#endif //PONG_GAME_H
