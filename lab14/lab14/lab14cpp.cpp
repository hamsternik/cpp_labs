#include <iostream>
#include <cstddef>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

//////////////////////MAIN FUNCTIONS PROTOTYPES////////////////////
void MAIN();
void bool_mas_input_zeros(int *, int n);
void rand_input_in_file(FILE *, int *, int);
void write_same_in_file(FILE *, FILE *, int *, int, int *);
void output_same_from_file(FILE *, int *, int);

//////////////////////HELP FUNCTIONS PROTOTYPES////////////////////
void output_file(FILE *, int *, int);
void output_arr(int *X, int);

///////////////////////////PROGRAMS BODY/////////////////////////
int main() {
	MAIN();
	_getch();
}

void MAIN() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	FILE *F, *F1;
	fopen_s(&F, "D:\\F.dat", "wb");
	int n, k=0;
	cout << "Введите кол-во элементов в файле F: ";
	cin >> n;
	int *bool_mas = new int[n];

	// input zeros in arr
	bool_mas_input_zeros(bool_mas, n);

	// random input in file
	rand_input_in_file(F, bool_mas, n);

	fopen_s(&F1, "D:\\F1.dat", "wb");

	// запись одинаковых эл-ов в файл
	write_same_in_file(F, F1, bool_mas, n, &k);

	// закрытие файлов ///
	fclose(F);
	fclose(F1);

	
	fopen_s(&F1, "D:\\F1.dat", "rb");
	int *a = new int[k];
	output_same_from_file(F1, a, k);
	fclose(F);
	fclose(F1);
}

////////////////////===================FUNCTIONAL=====================/////////////////

void bool_mas_input_zeros(int *bool_mas, int n) {
	for (int i = 0; i < n; ++i)
		bool_mas[i] = 0;
}

void rand_input_in_file(FILE *F, int *bool_mas, int n) {
	int x;
	for (int i = 0; i < n; ++i) {
		x = rand() % n;
		fwrite(&x, sizeof(int), 1, F);
		bool_mas[x]++;
	}
}

void write_same_in_file(FILE *F, FILE *F1, int *bool_mas, int n, int *k) {
	for (int i = 0; i < n; ++i) {
		if (bool_mas[i] > 1) {
			fwrite(&i, sizeof(int), 1, F1);
			(*k)++;
		}
	}
	cout << endl;
}

void output_same_from_file(FILE *F1, int *a, int k) {
	fread(a, sizeof(int), k, F1);
	cout << "Елементы в файле, которые повторяются: " << endl;
	for (int i = 0; i < k; ++i)
		cout << a[i] << " ";
	cout << endl;
}

////////////////////===================DEBUGGING====================/////////////////

void output_arr(int *X, int n) {
	for (int i = 0; i < n; ++i)
		cout << X[i] << " ";
	cout << endl;
}

void output_file(FILE *F, int* q, int n) {
	fread(q, sizeof(int), n, F);
	cout << "Ёлементы файла F: " << endl;
	for (int i = 0; i < n; ++i)
		cout << q[i] << " ";
	cout << endl;
}
