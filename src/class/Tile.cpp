#include <Tile.hpp>

Tile::Tile(): _position({0,0}) {}
Tile::Tile(int x, int y) {
	_position.x = x;
	_position.y = y;
}

Tile::~Tile() {}

t_point	Tile::getPosition() const { return _position; }
