#include "FlappyBoi.h"
#include <SFML/Graphics.hpp>
#include "Constants.cpp"
#include <iostream>



FlappyBoi::FlappyBoi(sf::RenderWindow *window, float x, float y)
	: Entity(window, x,y)
{

}


FlappyBoi::~FlappyBoi()
{
}

void FlappyBoi::update(float deltaT)
{
	this->fall(deltaT);
	std::cout << this->position.x << " " << this->position.y << std::endl;
}
sf::Shape* FlappyBoi::buildShape()
{
	return new sf::CircleShape(50.0f);
}

void FlappyBoi::jump()
{
	this->velocity += Constants::jumpVector;
}

void FlappyBoi::fall(float deltaT)
{
	this->position += this->velocity;
	this->velocity += Constants::gravity * deltaT;
}