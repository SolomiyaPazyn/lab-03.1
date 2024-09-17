// Lab_03_1.cpp
// < Пазин,Соломія >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 25

#include <iostream>
#include <cmath>

using namespace std;

// Функція для обчислення котангенса
double ctg(double x) {
	return 1.0 / tan(x);
}

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	
	cout << "x = "; cin >> x;

	A = 8.1 + pow(x, 3);
	// спосіб 1: розгалуження в скороченій формі
	if (x < -3.5)
		B = 1 - pow(x, 5);
	else 
		if (x >= -3.5 && x < 1)
		B = ctg(fabs(x + 1));
	else
		B = atan(2 * x) - log10(x / 2);
	
	y = A + B;
	
	cout << endl;
	cout << "1) y = " << y << endl;
	
	// спосіб 2: розгалуження в повній формі
	if (x < -3.5) {
		B = 1 - pow(x, 5);
	}
	else {
		if (x > 1) {
			B = atan(2 * x) - log10(x / 2);
		}
		else {
			B = ctg(fabs(x + 1));;
		}
	}

	y = A + B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}