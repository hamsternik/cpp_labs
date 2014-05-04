#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
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
	if (x1 < 0 && y1 < 0) { cout << "Наша точка не лежит в нашей выделенной площади" << endl; }
	else 
		if (y1 > y) {
			cout << "Наша точка лежит выше нашей площади" << endl; }
		else if (y1 == y) { cout << "Наша точка лежит на прямой y=3" << endl; }
		else {
			if (x1 > R) { cout << "Наша точка лежит вне круга" << endl; }
			else if ((R == x1) && (y = 0)) { cout << "Наша точка лежит на окружности" << endl; }
			else if ((x1 == R) && ((y > 0) || y < 0)) { cout << "Наша точка не лежит в данной (выделенной) площади" << endl; }
			else {
				cout << "Наша точка лежит в заданой площади" << endl;
			}
		}
		_getch();
}