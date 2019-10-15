#include "Bat.h"
#include "Ball.h"
#include <sstream>
#include <cstdlib>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    Clock clock;
    int windowWidth = 1024;
    int windowHeight = 768;
    RenderWindow window(VideoMode(windowWidth, windowHeight), "Pong");
    window.setFramerateLimit(122);
    int score = 0;

    Bat bat(10, windowHeight / 2);
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
        if(Keyboard::isKeyPressed(Keyboard::Up))
        {
            bat.moveUp();
        }
        else if (Keyboard::isKeyPressed(Keyboard::Down))
        {
            bat.moveDown();
        }
        else if(Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.close();
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
        ball.update();
        bat.update();

        std::stringstream ss;
        ss << "Score: " << score;
        hud.setString(ss.str());


        window.clear(Color(26, 128, 182, 255));
        window.draw(bat.getShape());
        window.draw(ball.getShape());
        window.draw(hud);
        window.display();

    }
    return 0;

}