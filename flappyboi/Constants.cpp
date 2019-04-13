#pragma once
#include <SFML/Graphics.hpp>
namespace Constants {
	const float gravityForce = 9.8f;
	const float jumpForce = 1000.0f;
	const float meterLengthInPixels = 50;
	const sf::Vector2f gravity = sf::Vector2f{ 0.0f, gravityForce * meterLengthInPixels };
	const sf::Vector2f jumpVector = sf::Vector2f{ 0.0f, -jumpForce * meterLengthInPixels };
}