#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Fraction
{
private:
	int Numerator_{};
	int Denominator_{};

public: Fraction(int getnumerator, int Denominator) : Numerator_{ getnumerator }, Denominator_{ Denominator } {}
		Fraction() {};

	 // friend std::ostream operator <<(std::ostream& ostream, const Fraction& Fraction)
	 // {
	//	  return (ostream << Fraction.Numerator_ << Fraction.Denominator_ ); //По какой то причине не работает перегрузка для <<
	 // }

	  Fraction operator =(const Fraction& Fraction)
	  {
		  if (this == &Fraction) { return *this; }

		  this->Denominator_ = Fraction.Denominator_;
		  this->Numerator_ = Fraction.Numerator_;
		  return *this;
	  }
	  Fraction operator +(const Fraction& h2)
	  {
		  return { (Numerator_ * 5) + (h2.Numerator_* 4),(Denominator_ * 5) + (h2.Denominator_* 4)};
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
		  return { Numerator_ * h2.Numerator_,Denominator_ * h2.Denominator_ };
	  }
	  Fraction operator -()     
	  {
		  Numerator_ = -Numerator_;
		  Denominator_ = -Denominator_;
		  return *this;
	  }
	  Fraction operator ++()   
	  {
		  Numerator_ = ++Numerator_;
		  Denominator_ = ++Denominator_;
		  return *this;
	  }
	  Fraction operator --()
	  {
		  Numerator_ = --Numerator_;
		  Denominator_ = --Denominator_;
		  return *this;
	  }
	  Fraction operator ++(int)
	  {
		  Fraction temp{ *this };
		  ++(*this);
		  return temp;
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

	int a, b, c, d;
	cout << "Введите числитель дроби 1:"; cin >> a;
	cout << "Введите знаменатель дроби 1:"; cin >> b;
	cout << "Введите числитель дроби 2:"; cin >> c;
	cout << "Введите знаменатель дроби 2:"; cin >> d;

	Fraction f1(a, b);
	Fraction f2(c, d);

	cout << a << "/" << b << " + " << c << "/" << d << " = " << endl;//<< (f1 + f2) << endl;
	cout << a << "/" << b << " - " << c << "/" << d << " = " << endl; //<< (f1 - f2) << endl;
	cout << a << "/" << b << " * " << c << "/" << d << " = " << endl;//<< (f1 * f2) << endl;
	cout << a << "/" << b << " / " << c << "/" << d << " = " << endl;//<< (f1 / f2) << endl;
	cout << "++" << a << "/" << b << " * " << c << "/" << d << " = " << endl; //<< (++f1 * f2);
	cout << "Значения дроби 1 = " << endl;

	system("pause");
	return 0;
}