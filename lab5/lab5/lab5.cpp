#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "������� ���������� ��������� n=";
	cin >> n;
	if (n == 11 || n == 12 || n == 13 || n == 14) {
		cout << "� ����� ������ " << n << " ���������" << endl;
	}
	else if (n > 30)  {
		cout << "���������� ��������� �� ��������� � ������� ����������� �� �������" << endl;
}
	else {
		switch (n % 10) {
			case 1:
			{
					  cout << "� ����� ������ ";
					  cout << n;
					  cout << " �������";
					  break;
			}
			case 2: case 3: case 4:
			{
					  cout << "� ����� ������ ";
					  cout << n;
					  cout << " ��������";
					  break;
			}
			

			case 0: case 5: case 6: case 7: case 8: case 9:
			{
						cout << "� ����� ������ ";
						cout << n;
						cout << " ���������";
						break;
			}
		}
	}
	_getch();
}	