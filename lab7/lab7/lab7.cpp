#include <conio.h>
#include <iostream>

using namespace std;

int main()  {
	int n = 20;
	int factorial = 1;

	//n! = 1 * 2 * ... * n
	for (int i = 1; i < n+1; ++i)  {
		factorial *= i;
}
	cout << "The Factorial of " << n << " is " << factorial << endl;
	_getch();
}