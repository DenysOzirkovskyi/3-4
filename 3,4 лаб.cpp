// Lab_03_4.cpp
// < Озірковський Д.Л. >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((y <= 0 && x <= 0 && y>=-x-R) ||
		(y<=sqrt(R*R-x*x) && y >= 0 && x>=0 && x<= sqrt(R * R - x * x)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}