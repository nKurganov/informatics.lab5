#pragma once
#include "Pair.h";

class Fraction :
	public Pair
{
protected:
	//атрибуты
	int intPart;
	int fractPart;
public:
	//деконструктор
	virtual ~Fraction();
	//конструкторы
	Fraction(void);
	Fraction(int, int, int, int);
	Fraction(int, int, double);
	Fraction(const Fraction&);
	//селекторы
	int Get_intPart() { return intPart; }
	int Get_fractPart() { return fractPart; }
	//модификаторы
	void Set_intPart(int);
	void Set_fractPart(int);
	void Set_All(double);
	//перегрузка присваивания 
	Fraction& operator=(const Fraction&);
	//перегрузка операторов сравнения
	friend bool operator> (const Fraction& p1, const Fraction& p2);
	friend bool operator<= (const Fraction& p1, const Fraction& p2);
	friend bool operator< (const Fraction& p1, const Fraction& p2);
	friend bool operator>= (const Fraction& p1, const Fraction& p2);
	friend bool operator== (const Fraction& p1, const Fraction& p2);
	friend bool operator!= (const Fraction& p1, const Fraction& p2);
	//перегрузка ввода вывода
	friend istream& operator>> (istream& in, Fraction& p);
	friend ostream& operator<< (ostream& out, const Fraction& p);
	virtual void Show();
};

