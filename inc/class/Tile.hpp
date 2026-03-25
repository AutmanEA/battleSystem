#include <point.hpp>

/**
 * @brief Tile class represents one tile
 * @param getPosition() is used to get tile position
 */
class Tile {

	public:

		Tile();
		Tile(int x, int y);
		~Tile();

		t_point	getPosition() const;

	private:

		t_point	_position;
		// void	*_content; //Ce qu'il y a sur la case
};
