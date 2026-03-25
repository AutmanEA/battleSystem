#include <Hex.hpp>

Hex::Hex(): _Q(0), _R(0), _S(0) {}

Hex::Hex(int const q, int const r, int const s): _Q(q), _R(r), _S(s) {
	if (_Q + _R + _S != 0) {
		throw std::invalid_argument("Error: bad coordinates");
	}
}

int	Hex::q() const { return _Q; }
int	Hex::r() const { return _R; }
int	Hex::s() const { return _S; }

Hex		&Hex::operator = (Hex const &other) {
	*this = Hex(other._Q, other._R, other._S);
	return *this;
}

bool	Hex::operator == (Hex &other) { return _Q == other._Q && _R == other._R && _S == other._S; }
bool	Hex::operator != (Hex &other) { return !(*this == other); }

Hex	Hex::operator + (Hex &other) const { return Hex(_Q + other._Q, _R + other._R, _S + other._S); }
Hex	Hex::operator - (Hex &other) const { return Hex(_Q - other._Q, _R - other._R, _S - other._S); }

Hex	Hex::multiply(const int c) { return Hex(_Q * c, _R * c, _S * c); }

int	Hex::len() const {
	int q = _Q > 0 ? _Q : -_Q;
	int r = _R > 0 ? _R : -_R;
	int s = _S > 0 ? _S : -_S;
	return int((q + r + s) / 2);
}

int	Hex::distance(Hex &other) const {
	Hex tmp = *this - other;
	return tmp.len();
}
