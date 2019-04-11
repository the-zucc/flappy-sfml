#pragma once
#include<SFML/Graphics.hpp>
class Entity
{
public:
	Entity(sf::Window &window, float x, float y);
	~Entity();
	void update(float deltaT);
};

