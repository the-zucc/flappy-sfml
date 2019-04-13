#include <iostream>
#include <SFML/Graphics.hpp>
#include "Map.h"

bool pollEvents(sf::Event &event, sf::Window& window);

int main(int argc, char** argv) {
	sf::RenderWindow window(sf::VideoMode( 1280, 720 ), "SFML works!");

	sf::Clock clock;
	sf::Time accumulator = sf::Time::Zero;
	sf::Time ups = sf::seconds(1.f / 60.f);
	Map map = Map(&window);
	while (window.isOpen())
	{
		sf::Event event;
		bool spacePressed = pollEvents(event, window);
		while (accumulator > ups)
		{
			accumulator -= ups;
			map.update(ups.asSeconds(), spacePressed);
			//Physics();
		}
		window.clear();
		map.drawElements();
		window.display();
		accumulator += clock.restart();
	}
	return 0;
}

bool pollEvents(sf::Event& event, sf::Window& window)
{
	bool spacePressed = false;
	// while there are pending events...
	while (window.pollEvent(event))
	{
		// check the type of the event...
		switch (event.type)
		{
			// window closed
		case sf::Event::Closed:
			window.close();
			break;

			// key pressed
		case sf::Event::KeyPressed:
				spacePressed = true;
			break;
		default:
			break;
		}
	}
	return spacePressed;
}
