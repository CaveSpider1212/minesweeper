// created 4/15/2025

#pragma once

#include "Tile.hpp"

class BlankTile : public Tile
{
public:
	BlankTile(const sf::Vector2f& pos);

	void reveal(void);
	void flag(int *flagsRemaining);
	bool isBomb(void);
	bool isNumber(void);
	bool isBlankTile(void);
};