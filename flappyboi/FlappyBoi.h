#pragma once
#include "Entity.h"
#include <SFML/Graphics.hpp>
class FlappyBoi : public Entity
{
public:
	FlappyBoi(sf::RenderWindow *window, float x, float y);
	~FlappyBoi();
	void update(float detaT);
	sf::Shape* buildShape();
	void jump();
	void fall(float deltaT);
private:
	sf::Vector2f velocity;
};