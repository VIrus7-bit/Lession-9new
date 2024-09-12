#include <iostream>
#include <string>

using namespace std;

class Fraction
{
private:
	int Numerator_{};
	int Denominator_{};

public: Fraction(int getnumerator, int Denominator) : Numerator_{ getnumerator }, Denominator_{ Denominator } {}
		Fraction() {};

	  Fraction& operator =(const Fraction& Fraction)
	  {
		  if (this == &Fraction) { return *this; }

		  this->Denominator_ = Fraction.Denominator_;
		  this->Numerator_ = Fraction.Numerator_;
		  return *this;
	  }

	  Fraction operator +(const Fraction& h2)
	  {
		  return { Numerator_ + h2.Numerator_,Denominator_ + h2.Denominator_ };
	  }
	  Fraction operator -(const Fraction& h2)
	  {
		  return { Numerator_ - h2.Numerator_,Denominator_ - h2.Denominator_ };
	  }
	  Fraction operator /(const Fraction& h2)
	  {
		  return { Numerator_ / h2.Numerator_,Denominator_ / h2.Denominator_ };
	  }
	  Fraction operator *(const Fraction& h2)
	  {
		  return { Numerator_ * h2.Numerator_,Denominator_ * h2.Denominator_};
	  }

	  bool operator == (const Fraction& h2)
	  {
		  return { Numerator_ / Denominator_ == h2.Numerator_ / h2.Denominator_ };
	  }
	  bool operator <  (const Fraction& h2)
	  {
		  return { Numerator_ / Denominator_ < h2.Numerator_ / h2.Denominator_ };
	  }
	  bool operator >  (const Fraction& h2)
	  {
		  return { Numerator_ / Denominator_ > h2.Numerator_ / h2.Denominator_ };
	  }
	  bool operator != (const Fraction& h2)
	  {
		  return { Numerator_ / Denominator_ != h2.Numerator_ / h2.Denominator_ };
	  }
	  bool operator <= (const Fraction& h2)
	  {
		  return { Numerator_ / Denominator_ <= h2.Numerator_ / h2.Denominator_ };
	  }
	  bool operator >= (const Fraction& h2)
	  {
		  return { Numerator_ / Denominator_ >= h2.Numerator_ / h2.Denominator_ };
	  }
};

int main() {

	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	system("cls");

	Fraction f1(4, 3);
	Fraction f2(6, 11);

	cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	cout << "f1" << ((f1  < f2) ? " <  " : " not <  ") << "f2" << '\n';
	cout << "f1" << ((f1  > f2) ? " >  " : " not >  ") << "f2" << '\n';
	cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	
	system("pause");
	return 0;
}


