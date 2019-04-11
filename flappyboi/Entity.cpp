#include "Entity.h"
#include <SFML/Graphics.hpp>



Entity::Entity(sf::Window *window, float x, float y)
{
	this->window = window;
	this->position = { x, y };
	this->shape = this->buildShape();
}


Entity::~Entity()
{
}

void Entity::_update(float deltaT)
{
	this->update(deltaT);
	this->draw();
}