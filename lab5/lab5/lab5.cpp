#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введите количество студентов n=";
	cin >> n;
	if (n == 11 || n == 12 || n == 13 || n == 14) {
		cout << "В нашей группе " << n << " студентов" << endl;
	}
	else if (n > 30)  {
		cout << "Количество студентов не совпадает с заданым количеством по условию" << endl;
}
	else {
		switch (n % 10) {
			case 1:
			{
					  cout << "В нашей группе ";
					  cout << n;
					  cout << " студент";
					  break;
			}
			case 2: case 3: case 4:
			{
					  cout << "В нашей группе ";
					  cout << n;
					  cout << " студента";
					  break;
			}
			

			case 0: case 5: case 6: case 7: case 8: case 9:
			{
						cout << "В нашей группе ";
						cout << n;
						cout << " студентов";
						break;
			}
		}
	}
	_getch();
}	