#ifndef FRACTION_H
#define FRACTION_H
class Fraction {
	int m_num;
	int m_den;
public:
	Fraction(int num = 0, int den = 1) :
	  m_num(num), m_den(den)
	{
  }
  void print() const;
  friend Fraction operator*(const Fraction &a, const Fraction &b);
  friend Fraction operator*(const Fraction &a, int val);
  friend Fraction operator*(int val, const Fraction &a);
};
#endif
