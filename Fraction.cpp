#include "Fraction.h"
#include <math.h>;
#include <tchar.h>
#include <iostream>
#include <iomanip> 
#include <sstream>


int fractional_part_as_int(double number) {

	int number_of_decimal_places;
	std::stringstream ss;
	ss << std::setprecision(9) << number;
	std::string strNum = ss.str();
	size_t pos = strNum.find('.');
	if (pos != strNum.npos)
		number_of_decimal_places = strNum.size() - 1 - pos;
	else
		number_of_decimal_places = 0;
	double dummy;
	double frac = modf(number, &dummy);
	return round(frac * pow(10, number_of_decimal_places));
}

//�� ����������������� �����������
Fraction::Fraction(void) :Pair()
{
	intPart = 0;
	fractPart = 0;
}

//����������
Fraction::~Fraction()
{
}

//����������������� �����������
Fraction::Fraction(int f, int s, int ip, int fp) :Pair(f, s)
{
	intPart = ip;
	fractPart = fp;
}Fraction::Fraction(int f, int s, double num) : Pair(f, s)
{
	intPart = (int)num;
	fractPart = fractional_part_as_int(num);
}
//������������ 
Fraction::Fraction(const Fraction& Fraction)
{
	first = Fraction.first;
	second = Fraction.second;
	intPart = Fraction.intPart;
	fractPart = Fraction.fractPart;
}
//����������� first
void Fraction::Set_intPart(int i)
{
	intPart = i;
}
//����������� second
void Fraction::Set_fractPart(int f)
{
	fractPart = f;
}
//�������� ������������
Fraction& Fraction::operator=(const Fraction& Fraction)
{
	if (&Fraction == this) return *this;
	first = Fraction.first;
	second = Fraction.second;
	intPart = Fraction.intPart;
	fractPart = Fraction.fractPart;
	return *this;
}
//��������� ���������
bool operator==(const Fraction& f1, const Fraction& f2)
{
	return ((f1.first == f2.first && f1.second == f2.second) && (f1.intPart == f2.intPart && f1.fractPart == f2.fractPart));
}
bool operator!=(const Fraction& f1, const Fraction& f2)
{
	return !(f1 == f2);
}
bool operator>(const Fraction& f1, const Fraction& f2)
{
	return ((f1.first > f2.first) || (f1.first == f2.first && f1.second > f2.second)) && ((f1.intPart > f2.intPart) || (f1.intPart == f2.intPart && f1.fractPart > f2.fractPart));
}
bool operator>=(const Fraction& f1, const Fraction& f2)
{
	return (f1 > f2) || (f1 == f2);
}
bool operator<(const Fraction& f1, const Fraction& f2)
{
	return ((f1.first < f2.first) || (f1.first == f2.first && f1.second < f2.second)) && ((f1.intPart < f2.intPart) || (f1.intPart == f2.intPart && f1.fractPart < f2.fractPart));
}
bool operator<=(const Fraction& f1, const Fraction& f2)
{
	return (f1 < f2) || (f1 == f2);
}
//�������� ����� 
istream& operator>> (istream& in, Fraction& Fraction)
{
	cout << "\nFirst: "; in >> Fraction.first;
	cout << "\nSecond: "; in >> Fraction.second;
	cout << "\nInt part: "; in >> Fraction.intPart;
	cout << "\nFraction part: "; in >> Fraction.fractPart;
	return in;
}
//�������� ������
ostream& operator<< (ostream& out, const Fraction& Fraction)
{
	out << "\nFirst: " << Fraction.first;
	out << "\nSecond: " << Fraction.second;
	out << "\nFraction: " << Fraction.intPart << "." << Fraction.fractPart;
	out << "\n";
	return out;
}
void Fraction::Show()
{
	cout << "\nFirst: " << first;
	cout << "\nSecond: " << second;
	cout << "\nFraction: " << intPart << "." << fractPart;
	cout << "\n";
}
 

 

