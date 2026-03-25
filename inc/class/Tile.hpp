#include <point.hpp>

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
