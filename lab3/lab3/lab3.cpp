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
	printf("¬ведите число а= ");
	scanf_s("%lf", &a);
	printf("¬ведите число b = ");
	scanf_s("%lf", &b);
	printf("¬ведите число c= ");
	scanf_s("%lf", &c);
	printf("¬ведите число d= ");
	scanf_s("%lf", &d);
	double y = (5 * log10(c) + exp(d)) / (sin(sqrt(a)) + cos(fabs(b)));
	printf("%.3f", y);
	_getch();
}