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
	cout << "Введите пожалуйста парное число сомножителей N: ";
	cin >> n;
	while ((int)n < 2 || ((int)n % 2 != 0)) {
		cout << endl << "Введите ПОЖАЛУЙСТА парное число сомножителей N: ";
		cin >> n;
	}
	sum = recurs(n);
	cout << "Наше значение последовательности: " << sum << endl;
}

double recurs(double n) {
	if (n > 2)  return (recurs(n - 2) * (n / (n - 1)) * (n / (n + 1))); 
	else return (n / (n - 1)) * (n / (n + 1));
}