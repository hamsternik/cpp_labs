#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	float R;
	cout << "������� ������ ����������: ";
	cin >> R;
	float y;
	cout << "������� ��������� ������, ��� y = ";
	cin >> y;
	cout << "������� �������� ���������� �� ������� � �� ��������: " << endl;
	float x1, y1;
	cout << "������� x1=";
	cin >> x1;
	cout << "������� y1=";
	cin >> y1;
	if (x1 == 0 && y1 == 0) 
	{
		cout << "����� ����� � ���� ����� ���������" << endl;
	}
	else  
	{	
		if (x1*x1 + y1*y1 >= R*R)  
		{	
			cout << "���� ����� ����� �� ������" << endl;
		}
		else  
		{
			if (y1 < y && x1 > 0 && x1 < R) 
			{
				cout << "���� ����� ����� � ���������� �������" << endl;
			}
			else  
			{	
				cout << "���� ����� ����� � �����, �� �� ����� � ��������� �������" << endl;
			}
		}
	}
	_getch();

}