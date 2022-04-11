#pragma once
#include "Pair.h";

class Fraction :
	public Pair
{
protected:
	//��������
	int intPart;
	int fractPart;
public:
	//�������������
	virtual ~Fraction();
	//������������
	Fraction(void);
	Fraction(int, int, int, int);
	Fraction(int, int, double);
	Fraction(const Fraction&);
	//���������
	int Get_intPart() { return intPart; }
	int Get_fractPart() { return fractPart; }
	//������������
	void Set_intPart(int);
	void Set_fractPart(int);
	void Set_All(double);
	//���������� ������������ 
	Fraction& operator=(const Fraction&);
	//���������� ���������� ���������
	friend bool operator> (const Fraction& p1, const Fraction& p2);
	friend bool operator<= (const Fraction& p1, const Fraction& p2);
	friend bool operator< (const Fraction& p1, const Fraction& p2);
	friend bool operator>= (const Fraction& p1, const Fraction& p2);
	friend bool operator== (const Fraction& p1, const Fraction& p2);
	friend bool operator!= (const Fraction& p1, const Fraction& p2);
	//���������� ����� ������
	friend istream& operator>> (istream& in, Fraction& p);
	friend ostream& operator<< (ostream& out, const Fraction& p);
	virtual void Show();
};

