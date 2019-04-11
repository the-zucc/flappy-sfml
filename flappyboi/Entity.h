#pragma once
#include<SFML/Graphics.hpp>
class Entity
{
public:
	Entity(sf::Window *window, float x, float y);
	~Entity();
	void _update(float deltaT);
	virtual void update(float deltaT);
	virtual sf::Shape* buildShape();
	void draw();
	sf::Vector2f position;
private:
	sf::Window* window;
	sf::Shape* shape;
};

