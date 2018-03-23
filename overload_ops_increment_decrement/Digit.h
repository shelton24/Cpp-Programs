class Digit {
	int m_digit;
public:
  Digit(int digit = 0) : m_digit(digit)
  {
	}

	int get_digit() const {
		return m_digit;
	}

	Digit operator++(int) {
		Digit temp((*this).m_digit);
		m_digit++;
		return temp;
	}

	Digit operator--(int) {
		Digit temp((*this).m_digit);
		m_digit--;
		return temp;
	}

	Digit& operator++();
	Digit& operator--();

};

std::ostream & operator<<(std::ostream &out, const Digit &d);
