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
    RenderWindow window(VideoMode(windowWidth, windowHeight), "Pong");
    window.setFramerateLimit(122);
    int score = 0;

    Bat bat(10, windowHeight / 2);
    Bat bat2(windowWidth - 20, windowHeight /2);
    Ball ball(windowWidth / 2, windowHeight / 2);

    Text hud;

    Font font;
    font.loadFromFile("DS-DIGIT.ttf");

    hud.setFont(font);

    hud.setCharacterSize(75);

    hud.setFillColor(sf::Color::White);

    while(window.isOpen())
    {
        Time Time = clock.getElapsedTime();
        clock.restart();

        Event event;

        while(window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
		
		/* Paddle movements */

        if(Keyboard::isKeyPressed(Keyboard::Up))
        {
			if (bat.getPosition().top < 0)
			{
				bat.topBoundary();
			}

			bat.moveUp();
        }

        else if (Keyboard::isKeyPressed(Keyboard::Down))
        {
			if (bat.getPosition().top + 50 > windowHeight)
			{
				bat.bottomBoundary();
			}
			
			bat.moveDown();
        }
        else if(Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.close();
        }

        else if(Keyboard::isKeyPressed(Keyboard::W))
        {
			if (bat2.getPosition().top < 0)
			{
				bat2.topBoundary();
			}
            bat2.moveUp();
        }
        else if(Keyboard::isKeyPressed(Keyboard::S))
        {
			if (bat2.getPosition().top + 50 > windowHeight)
			{
				bat2.bottomBoundary();
			}
            bat2.moveDown();
        }

        // Ball hits top or bottom
        if(ball.getPosition().top+10 > windowHeight)
        {
            ball.hitBottom();
        }
        if(ball.getPosition().top < 0)
        {
            ball.reboundTop();
        }

        if(ball.getPosition().left < 0 || ball.getPosition().left + 10 > windowWidth)
        {
            ball.score();
            score++;
        }

        if(ball.getPosition().intersects(bat.getPosition()))
        {
            ball.reboundBat();
        }
        else if(ball.getPosition().intersects(bat2.getPosition()))
        {
            ball.reboundBat();
        }

        ball.update();
        bat.update();
        bat2.update();

        std::stringstream ss;
        ss << "Score: " << score;
        hud.setString(ss.str());


        window.clear(Color(26, 128, 182, 255));
        window.draw(bat.getShape());
        window.draw(bat2.getShape());
        window.draw(ball.getShape());
        window.draw(hud);
        window.display();

    }
    return 0;

}