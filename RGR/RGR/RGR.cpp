#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstddef>
#include <conio.h>
#include <locale.h>
#include <cmath>

using namespace std;

typedef long long lln;
typedef long double ldn;

void MAIN_std();
void MAIN_file();
int degree(ldn x, lln step);
int double_fact(lln x);
int factorial(lln x);
ldn main_function(ldn, ldn, int);

int main() 
{
	// welcome interface function
	setlocale(LC_ALL, "RUS");
	cout << "\t\t\t\t Добрый день" << endl;
	cout << "\t Вас приветствует расчетно - графическая работа Хомицевич Никиты" << endl;
	cout << "\t\t\t студента группы БС-32" << endl;
	cout << "\t На тему: \" Ряды Тейлора. Разложение ф-ии в степенные ряды \" " << endl << endl;
	system("PAUSE"); cout << endl;

	//input to choose a method of input\output
	int destiny;
	cout << "Выберете, пожалуйста, режим работы с программой и введите цифру: " << endl;
	cout << "\t 1 - ввод и вывод данных на экран" << endl;
	cout << "\t 2 - ввод и вывод данных в файл" << endl;
	cin >> destiny;
	while (!(destiny != 1 || destiny != 2)) 
	{
		cout << "Введите одно из предложеных двух значений: ";
		cin >> destiny;
	}

	// switch point to choose next work with program
	switch (destiny) 
	{
		case 1:
			MAIN_std();
			break;
		case 2:
			MAIN_file();
			break;
	}

	cout << "Нажмите кнопку для продолжения!" << endl;
	_getch();
}

void MAIN_std() 
{
	//our global variables
	lln step = 1;
	ldn y, x_start, x_end, x_delta, e;
	
	//x start
	cout << "input x start: ";
	cin >> x_start;
	while (fabs(x_start) > 1.)  
	{
		cout << "Введите верное начальное значение (от -1 до 1): ";
		cin >> x_start;
	}

	// x end
	cout << "input x end: ";
	cin >> x_end;
	while (fabs(x_end) > 1. || x_end <= x_start)
	{
		cout << "Введите верное конечное значение (от -1 до 1): ";
		cin >> x_end;
	}

	// delta
	cout << "input x delta: ";
	cin >> x_delta;
	while (x_delta >= x_start || fabs(x_delta) > 1.)
	{
		cout << "Введите верное значение delta x: ";
		cin >> x_delta;
	}

	// e
	cout << "input e: ";
	cin >> e;
	while (e >= x_delta) 
	{
		cout << "Введите верное значение ошибки e: ";
		cin >> e;
	}

	//logica
	while (x_start <= x_end) 
	{
		y = x_start;
		y += main_function(e, x_start, 1); // main function 
		cout << "Our arc-hyperbolic sine function at the " << step << " step:" << setprecision(5) << y << endl;
		x_start += x_delta;
		step += 1;
	}
}

void MAIN_file() 
{
	FILE *rgr;
	freopen_s(&rgr, "rgr_input.txt", "r", stdin);
	freopen_s(&rgr, "rgr_output.txt", "w", stdout);
	lln step = 1;
	ldn y, x_start, x_end, x_delta, e;
	cout << "input x start: ";
	cin >> x_start;
	cout << "input x end: ";
	cin >> x_end;
	cout << "input x delta: ";
	cin >> x_delta;
	cout << "input e: ";
	cin >> e;
	cout << endl << endl;

	//logica
	while (x_start <= x_end) {
		y = x_start;
		y += main_function(e, x_start, 1); // main function 
		cout << "Our arc-hyperbolic sine function at the " << step << " step:" << setprecision(5) << y << endl;
		x_start += x_delta;
		step += 1;
	}
	fclose(stdout);
	freopen_s(&rgr, "CON", "w", stdout);
}


ldn main_function(ldn e, ldn x, int n) 
{
	ldn answer;
	answer = (pow(-1, n) * pow(x, 2 * n + 1) * factorial(2 * n)) / (pow(4, n) * factorial(n) * factorial(n) * (2. * n + 1.));
	if (fabs(answer) >= e)
		answer += main_function(e, x, n + 1);
	return answer;
}

int factorial(lln x) 
{
	return !x ? 1 : x * factorial(x - 1);
}

