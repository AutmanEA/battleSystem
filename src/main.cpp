#include <iostream>
#include <Hex.hpp>

int main() {

	Hex a(5, -6, 1);
	Hex b(3, -2, -1);
	Hex c(3, -2, -1);


	std::cout << "OPE TEST" << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (b != c) << std::endl;

	Hex d = b + c;
	Hex e = a - c;
	Hex f = d.multiply(5);
	std::cout << d.q() << ", " << d.r() << ", " << d.s()<< std::endl;
	std::cout << e.q() << ", " << e.r() << ", " << e.s()<< std::endl;
	std::cout << f.q() << ", " << f.r() << ", " << f.s()<< std::endl;

	std::cout << "LEN + DIST" << std::endl;
	std::cout << f.len() << std::endl;
	Hex g(0, -3, +3);
	std::cout << b.distance(g) << std::endl;


}
