#pragma once

#include "Tile.hpp"

class BombTile : public Tile
{
public:
	BombTile(const sf::Vector2f& pos);

	void reveal(void);
	void flag(int *flagsRemaining);
	bool isBomb(void);
	bool isNumber(void);
	bool isBlankTile(void);
};