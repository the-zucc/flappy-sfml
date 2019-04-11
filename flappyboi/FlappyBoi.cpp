#include "FlappyBoi.h"
#include <SFML/Graphics.hpp>
#include "Constants.cpp"



FlappyBoi::FlappyBoi(sf::Window *window, float x, float y)
	: Entity(window, x,y)
{

}


FlappyBoi::~FlappyBoi()
{
}

void FlappyBoi::update(float deltaT)
{
	this->position += Constants::gravity;
}
sf::Shape* FlappyBoi::buildShape()
{

}