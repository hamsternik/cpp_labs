#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, d;
	printf("������� ����� �= ");
	scanf_s("%lf", &a);
	printf("������� ����� b = ");
	scanf_s("%lf", &b);
	printf("������� ����� c= ");
	scanf_s("%lf", &c);
	printf("������� ����� d= ");
	scanf_s("%lf", &d);
	double y = (5 * log10(c) + exp(d)) / (sin(sqrt(a)) + cos(fabs(b)));
	printf("%.3f", y);
	_getch();
}