#include <iostream>
#include <cmath>
#include <locale.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введите натуральное число, отличное от нуля: ";
	cin >> n;
	double sqrt_n = sqrt(n);
	for (int x = 0; x < sqrt_n; ++x)  
	for (int y = 0; y < x+1; ++y)  {	
		if (n == (int)(x*x + y*y))  {
			cout << "Мы нашли пару 'x,y':  " << x << " " << y << endl;
	}
		else  {
			continue;
}
}
	_getch();
}
