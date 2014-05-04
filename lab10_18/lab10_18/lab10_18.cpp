#include <iostream>
#include <conio.h>
#include <locale.h>
#include <ctime>

using namespace std;

void MAIN();
void input_arr(int *, int);
void output_arr(int *, int);
void change_arr(int *, int, int, int, int);

int main() {
	MAIN();
	_getch();
}

void MAIN() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int arr_length;
	cout << "Введите длину массива: "; cin >> arr_length;
	int *my_arr = new int[arr_length];
	input_arr(my_arr, arr_length);
	cout << "\t" << "ИЗНАЧАЛЬНЫЙ МАССИВ " << endl;
	output_arr(my_arr, arr_length);
	int x, y;
	cout << "Введите промежуток значений, значения которого будет заменятся: "; cin >> x >> y;
	int Z;
	cout << "Введите значение Z, на которое будут заменятся все значения, удовлетворяющие заданный промежуток: ";
	cin >> Z;
	change_arr(my_arr, arr_length, x, y, Z);
	cout << "\t" << "КОНЕЧНЫЙ МАССИВ " << endl;
	output_arr(my_arr, arr_length);
}

void input_arr(int *arr, int n) {
	for (int i = 0; i < n; ++i)
		arr[i] = rand() % 30 + 1;
}

void output_arr(int *arr, int n) {
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " ";
		cout << endl << endl;
}

void change_arr(int *arr, int lenth, int x, int y, int Z) {
	for (int i = 0; i < lenth; ++i) {
		if (arr[i] >= x && arr[i] <= y)
			arr[i] = Z; 
		else 
			continue;
	}
}