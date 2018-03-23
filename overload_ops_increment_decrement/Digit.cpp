#include <iostream>
#include "Digit.h"

Digit& Digit::operator++() {
	m_digit++;
	return *this;
}

Digit& Digit::operator--() {
	m_digit--;
	return *this;
}

std::ostream & operator<<(std::ostream &out, const Digit &d) {
  out << d.get_digit() << std::endl;
  return out;
}
