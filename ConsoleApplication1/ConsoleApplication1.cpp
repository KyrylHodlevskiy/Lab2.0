﻿// Lab2.1.cpp
// Годлевський Кирил
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	z1 = (sin(a)+sin(5*a)-sin(3*a))/(cos(a)-cos(3*a)+cos(5*a));
	z2 = tan(3*a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
<<<<<<< HEAD
	cout << "Зміна №1.1";
	cout << "Зміна №1.2";
=======

	cout << "Зміна №1.1";
	cout << "Зміна №1.2";
	cout << "Зміна №2.1";
>>>>>>> gilka2
	cin.get();
	return 0;
}

