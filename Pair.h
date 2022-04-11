#pragma once
#include <iostream>
#include "object.h"
using namespace std;
class Pair :
	public Object
{
protected:
	//атрибуты
	int first;
	int second;
public:
	//деконструктор
	virtual ~Pair();
	//конструкторы
	Pair(void);
	Pair(int, int);
	Pair(const Pair&);
	//селекторы
	int Get_first() { return first; }
	int Get_second() { return second; }
	//модификаторы
	void Set_first(int);
	void Set_second(int);
	//перегрузка присваивания 
	Pair& operator=(const Pair&);
	//перегрузка операторов сравнения
	friend bool operator> (const Pair& p1, const Pair& p2);
	friend bool operator<= (const Pair& p1, const Pair& p2);
	friend bool operator< (const Pair& p1, const Pair& p2);
	friend bool operator>= (const Pair& p1, const Pair& p2);
	friend bool operator== (const Pair& p1, const Pair& p2);
	friend bool operator!= (const Pair& p1, const Pair& p2);
	//перегрузка ввода вывода
	friend istream& operator>> (istream& in, Pair& p);
	friend ostream& operator<< (ostream& out, const Pair& p);
	virtual void Show();
};


