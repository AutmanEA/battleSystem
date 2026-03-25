#include <iostream>
#include <Tile.hpp>

int main() {
	std::cout << "Tile test" << std::endl;

	Tile tile(2, 6);

	t_point pt = tile.getPosition();

	std::cout << "x=" << pt.x << ", y=" << pt.y << std::endl;
}
