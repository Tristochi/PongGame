#include "Game.h"
#include "Bat.h"
#include "Ball.h"
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "Constants.h"

using namespace sf;

int main()
{
    Clock clock;
	Game game;
    // RenderWindow window(VideoMode(windowWidth, windowHeight), "Pong");
    // window.setFramerateLimit(122);
    int score = 0;

    Font font;
    font.loadFromFile("DS-DIGIT.ttf");

    while(game.isOpen())
    {
        Time Time = clock.getElapsedTime();
        clock.restart();
		game.start();


    }
    return 0;

}