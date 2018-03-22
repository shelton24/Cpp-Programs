#include "Fraction.h"
#include <iostream>

void Fraction::print() const {
    std::cout << m_num << "/" << m_den << std::endl;
}

Fraction operator*(const Fraction &a, const Fraction &b)
{
	return Fraction(a.m_num * b.m_num, a.m_den * b.m_den);
}

Fraction operator*(const Fraction &a, int val)
{
	return Fraction(a.m_num * val, a.m_den);
}

Fraction operator*(int val, const Fraction &b)
{
	return b * val;
}
