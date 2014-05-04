#include <iostream>
#include <cstdio>
#include <cmath>
#include <conio.h>
#include <locale.h>

using namespace std;

void MAIN();
double recurs(double n);


int main()  {
	MAIN();
	_getch();
}

void MAIN() {
	setlocale(LC_ALL, "RUS");
	double n;
	double sum;
	cout << "������� ���������� ������ ����� ������������ N: ";
	cin >> n;
	while ((int)n < 2 || ((int)n % 2 != 0)) {
		cout << endl << "������� ���������� ������ ����� ������������ N: ";
		cin >> n;
	}
	sum = recurs(n);
	cout << "���� �������� ������������������: " << sum << endl;
}

double recurs(double n) {
	if (n > 2)  return (recurs(n - 2) * (n / (n - 1)) * (n / (n + 1))); 
	else return (n / (n - 1)) * (n / (n + 1));
}