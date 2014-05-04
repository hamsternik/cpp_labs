#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	float R;
	cout << "Введите радиус окружности: ";
	cin >> R;
	float y;
	cout << "Введите уравнение прямой, где y = ";
	cin >> y;
	cout << "Введите значение координаты по абсцисе и по ординате: " << endl;
	float x1, y1;
	cout << "Введите x1=";
	cin >> x1;
	cout << "Введите y1=";
	cin >> y1;
	if (x1 == 0 && y1 == 0) 
	{
		cout << "Точка лежит в нуле наших координат" << endl;
	}
	else  
	{	
		if (x1*x1 + y1*y1 >= R*R)  
		{	
			cout << "Наша точка лежит за кругом" << endl;
		}
		else  
		{
			if (y1 < y && x1 > 0 && x1 < R) 
			{
				cout << "Наша точка лежит в выделенной области" << endl;
			}
			else  
			{	
				cout << "Наша точка лежит в круге, но не лежит в выделеной области" << endl;
			}
		}
	}
	_getch();

}