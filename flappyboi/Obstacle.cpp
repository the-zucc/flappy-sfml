#include "Obstacle.h"
#include <SFML\Graphics.hpp>



Obstacle::Obstacle(sf::Window &window, float height)
	: Entity(window, height, window.getSize().x)
{

}


Obstacle::~Obstacle()
{
}
