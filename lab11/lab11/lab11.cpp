#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cmath>
#include <ctime>

using namespace std;

void MAIN();
void matrix_destroy(int **, int, int);
void input_matrix(int**, int, int);
void input_matrix(int**, int, int);
void output_matrix(int**, int, int);
void matrix_change(int**, int, int, int);


int main() {
	MAIN();
	_getch();
}

void MAIN() {
	setlocale(LC_ALL, "RUS"); 
	srand(time_t(NULL));
	int rows, columns;
	cout << "‚ведите количество строк: "; cin >> rows; cout << endl;
	cout << "‚ведите количество столбиков: "; cin >> columns; cout << endl;
	int **matrix = new int *[rows]; // create a double pointer as a matrix
	for (int i = 0; i < rows; ++i)
		matrix[i] = new int[columns]; // dynamic memory allocation 
	input_matrix(matrix, rows, columns); // input random values into array
	cout << "\t" << " FIRST MATRIX " << endl;
	output_matrix(matrix, rows, columns); // output array
	int k; // number of line using by user
	cout << "‚ведите рандомный номер строки из нашей матрицы k: "; cin >> k; cout << endl;
	matrix_change(matrix, rows, columns, k); // important function! need to add value from 1 line to choosen
	cout  << "\t" << " NEW MATRIX " << endl;
	output_matrix(matrix, rows, columns); // output array again
	matrix_destroy(matrix, rows, columns); // delete array and free our allocate memories
	}


void matrix_destroy(int **matrix, int n, int m) {
	for (int i = 0; i < n; ++i) 
		delete[] matrix[i];
	delete[] matrix;
}

void input_matrix(int **matrix, int n, int m) {
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)  {
			matrix[i][j] = rand() % 100 + 1;		
		}
}

void output_matrix(int **matrix, int n, int m) {
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)  {
			cout << matrix[i][j] << " ";
			if (j == m - 1) {cout << endl;}
		}
	cout << endl << endl; 
}

void matrix_change(int **matrix, int n, int m, int k) {
	for (int i = 0; i < n; ++i) 
		matrix[k-1][i] += matrix[0][i];
}