#pragma once
#include<SFML/Graphics.hpp>
class Entity
{
public:
	Entity(sf::RenderWindow *window, float x, float y);
	~Entity();
	virtual void update(float deltaT);
	virtual sf::Shape* buildShape();
	void draw();
	sf::Vector2f position;
private:
	sf::RenderWindow* window;
	sf::Shape* shape;
};

