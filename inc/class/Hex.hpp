#include <stdexcept>

class Hex {

	public:

		Hex(int const q, int const r, int const s);
		Hex();

		int	q() const;
		int	r() const;
		int	s() const;

		Hex		&operator = (Hex const &other);

		bool	operator == (Hex &other);
		bool	operator != (Hex &other);
		Hex		operator + (Hex &other) const;
		Hex		operator - (Hex &other) const;

		Hex	multiply(const int c);
		int	len() const;
		int	distance(Hex &other) const;

	private:

		const int _Q, _R, _S;

};
