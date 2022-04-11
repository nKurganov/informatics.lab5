#include "Pair.h"

//не параметризованный конструктор
Pair::Pair(void)
{
	first = 0;
	second = 0;
}

//деструктор
Pair::~Pair()
{
}

//параметризованный конструктор
Pair::Pair(int f, int s)
{
	first = f;
	second = s;
}
//клонирование 
Pair::Pair(const Pair& pair)
{
	first = pair.first;
	second = pair.second;
}
//модификатор first
void Pair::Set_first(int f)
{
	first = f;
}
//модификатор second
void Pair::Set_second(int s)
{
	second = s;
}
//оператор присваивания
Pair& Pair::operator=(const Pair& pair)
{
	if (&pair == this) return *this;
	first = pair.first;
	second = pair.second;
	return *this;
}
void Pair::Show()
{
	cout << "\nFirst: " <<  first;
	cout << "\nSecond: " <<  second;
	cout << "\n";
}
//операторы сравнения
bool operator==(const Pair& p1, const Pair& p2)
{
	return (p1.first == p2.first && p1.second == p2.second);
}
bool operator!=(const Pair& p1, const Pair& p2)
{
	return !(p1 == p2);
}
bool operator>(const Pair& p1, const Pair& p2)
{
	return (p1.first > p2.first) || (p1.first == p2.first && p1.second > p2.second);
}
bool operator>=(const Pair& p1, const Pair& p2)
{
	return (p1 > p2) || (p1 == p2);
}
bool operator<(const Pair& p1, const Pair& p2)
{
	return (p1.first < p2.first) || (p1.first == p2.first && p1.second < p2.second);
}
bool operator<=(const Pair& p1, const Pair& p2)
{
	return (p1 < p2) || (p1 == p2);
}
//оператор ввода 
istream& operator>> (istream& in, Pair& pair)
{
	cout << "\nFirst: "; in >> pair.first;
	cout << "\nSecond: "; in >> pair.second;
	return in;
}
//оператор вывода
ostream& operator<< (ostream& out, const Pair& pair)
{
	out << "\nFirst: " << pair.first;
	out << "\nSecond: " << pair.second;
	out << "\n";
	return out;
}
