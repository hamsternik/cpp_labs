#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

void MAIN() {
	setlocale(LC_ALL, "RUS");
	int x, sum = 0;
	cout << "Введите целое число x: ";
	cin >> x;
	int x1 = x;
	while (x > 0) {
		if (x % 2 == 0) { x1 >>= 1; if (x1 % 2 == 0) { ++sum; x >>= 1; } else { x >>= 1; } }
		else { x >>= 1; x1 >>= 1; }
	}
	cout << "Количество пар нулевых битов в числе х: " << sum << endl;
}

int main(void)  {
	MAIN();
	_getch();
}