#include "Entity.h"
#include <SFML/Graphics.hpp>



Entity::Entity(sf::RenderWindow *window, float x, float y)
{
	this->window = window;
	this->position = { x, y };
	this->shape = this->buildShape();
}


Entity::~Entity()
{
}

void Entity::update(float deltaT)
{
	
}

void Entity::draw()
{
	this->shape->setPosition(this->position);
	this->window->draw(*this->shape);
}

sf::Shape* Entity::buildShape()
{
	return new sf::CircleShape(100.f);
}