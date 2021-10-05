// lab_03_3.cpp
// Квецко Вікторії 
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 11

#include <iostream>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x<= - 1 - R)
		y = -x - 1 - R ;
	else
		if (-1-R < x && x <= -1)
			y = pow(((R + x + 1) * (R - x - 1)), 0.5);
		else
			if (-1  < x && x <= 1)
				y = R;
			else
				if (1 < x && x <= 2)
					y = 2*R-x+1-R*x;
				else
					y = -1;

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
