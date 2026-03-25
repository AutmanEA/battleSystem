#include <Tile.hpp>

Tile::Tile(): _position(Hex(0, 0, 0)) {}
Tile::Tile(Hex const &position)
{
	_position = position;
}

Tile::~Tile() {}

Hex	Tile::getPosition() const { return _position; }
