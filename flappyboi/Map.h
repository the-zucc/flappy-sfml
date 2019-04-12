#pragma once
#include "FlappyBoi.h"
#include "Obstacle.h"
#include <list>
class Map
{
public:
	Map(sf::RenderWindow *window);
	~Map();
	void update(float deltaT, bool spacePressed);
	void drawElements();
private:
	std::list<Obstacle *> obstacles;
	FlappyBoi* boi;
	sf::RenderWindow* window;
};

