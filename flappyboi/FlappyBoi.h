#pragma once
#include "Entity.h"
#include <SFML/Graphics.hpp>
class FlappyBoi : public Entity
{
public:
	FlappyBoi(sf::Window &window, float x, float y);
	~FlappyBoi();

};

