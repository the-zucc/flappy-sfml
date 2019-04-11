#pragma once
#include <SFML/Graphics.hpp>
#include "Entity.h"
class Obstacle : public Entity
{
public:
	Obstacle(sf::Window *window, float height);
	~Obstacle();
};

