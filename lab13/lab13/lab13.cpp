#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cmath>
#include <vector>
#include <ctime>

using namespace std;

void MAIN();
void quick_sort(int**, int, int, int);
void matrix_input(int**);
void matrix_output(int**);
void matrix_delelte(int**);

int main() {
	MAIN();
	_getch();
}

void MAIN() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int **matrix = new int *[10];
	for (int i = 0; i < 10; ++i)
		matrix[i] = new int[10];
	cout << "\t" << " FIRST MATRIX " << endl;
	matrix_input(matrix);
	matrix_output(matrix);
	cout << endl << endl;
	//==============QUICK_SORT=====================
	for (int i = 0; i < 10; i++)
	for (int j = 0; j < 10; j += 10)
		quick_sort(matrix, i, 0, 9);
	//==============QUICK_SORT=====================
	matrix_output(matrix);
	matrix_delelte(matrix);
}

void matrix_input(int **matrix) {
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			matrix[i][j] = rand() % 50 + 1;
}

void matrix_output(int **matrix) {
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j) {
			cout << matrix[i][j] << " ";
			if (j == 9) {cout << endl;}
	}
}

void matrix_delelte(int **matrix) {
	for (int i = 0; i < 10; ++i)
		delete[] matrix[i];
	delete[] matrix;
}

void quick_sort(int **matrix, int rows, int low, int high) {
	int i = low, j = high, med_ind = (low + high) / 2, med = matrix[rows][med_ind];
	do {
		while (matrix[rows][i] < med) { ++i; }
		while (matrix[rows][j] > med) { --j; }
		if (i <= j) {
			if (matrix[rows][i] > matrix[rows][j]) {
				matrix[rows][i] = matrix[rows][i] ^ matrix[rows][j];
				matrix[rows][j] = matrix[rows][i] ^ matrix[rows][j];
				matrix[rows][i] = matrix[rows][i] ^ matrix[rows][j];
			}
			i++; j--;
		}
	}
	while (i < j);
	if (low < j) { quick_sort(matrix, rows, low, j); }
	if (i < high) { quick_sort(matrix, rows, i, high); }
}