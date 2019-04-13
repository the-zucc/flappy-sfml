#include "Map.h"




Map::Map(sf::RenderWindow *window)
{
	this->boi = new FlappyBoi(window, window->getSize().x / 2, window->getSize().x / 2);

	this->obstacles = std::list<Obstacle*>();
	this->window = window;
}


Map::~Map()
{
	//TODO Maybe free list, dunno if needed.
}

void Map::update(float deltaT, bool spacePressed) {
	//process input
	//move boi
	//move obstacles
	FlappyBoi* boi = this->boi;
	if (spacePressed) {
		boi->jump();
	}
	boi->update(deltaT);
	for (Obstacle* const& obst : this->obstacles) {
		obst->update(deltaT);
	}
}
void Map::drawElements() {
	boi->draw();
	for (Obstacle* const& obst : this->obstacles) {
		obst->draw();
	}
}
