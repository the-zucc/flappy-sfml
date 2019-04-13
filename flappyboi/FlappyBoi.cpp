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
	sf::CircleShape* returnVal = new sf::CircleShape(50.0f);
	returnVal->setFillColor(sf::Color::Green);
	return returnVal;
}

void FlappyBoi::jump()
{
	std::cout << "jumped";
	this->velocity -= this->velocity;
}

void FlappyBoi::fall(float deltaT)
{
	this->position += this->velocity * deltaT;
	this->velocity += Constants::gravity * deltaT;
}