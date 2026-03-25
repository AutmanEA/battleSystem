#include <Hex.hpp>

/**
 * @brief Tile class represents one tile
 * @param getPosition() is used to get tile position
 */
class Tile {

	public:

		Tile();
		Tile(Hex const &position);
		~Tile();

		Hex	getPosition() const;

	private:

		Hex				_position;
		TileStatement	_statement;
		// void	*_content; //Ce qu'il y a sur la case
};
