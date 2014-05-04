#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <conio.h>
#include <locale.h>

using namespace std;

void MAIN();
void add_mas_values(int *A, int n);
int mod_sum(int *A, int n);


int main()  {
	MAIN();
	_getch();
}

void MAIN() {
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Задайте размер массива: " << endl;
	cin >> n;
	int *mas = new int[n];
	add_mas_values(mas, n);
	cout << "Сумма модулей элементов массива, что расположенны после первого нулевого элемента: ";
	cout << mod_sum(mas, n);
	cout << endl;

	delete[] mas;
}

void add_mas_values(int *A, int n) {
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; ++i)  {
		A[i] = rand() % 20 - 1;
		cout << A[i] << " ";
	}
}


int mod_sum(int *A, int n) {
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		if (A[i] == 0) {
			for (++i; i < n; i++)
				sum += abs(A[i]);
			break;
		}
	}
	return sum;
}