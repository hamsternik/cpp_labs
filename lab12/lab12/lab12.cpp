#include <iostream>
#include <cstdio>
#include <string.h>
#include <string>
#include <conio.h>
#include <locale>

using namespace std;

void MAIN();
int switch_func(int, int&, int&, int&);

int main() {
	MAIN();
	_getch();
}

void MAIN() {
	setlocale(LC_ALL, "RUS");
	char str1[100];
	cin.getline(str1, 100);
	int i=0, j=0, sum=0, one_syllable=0, two_syllable=0, three_syllable=0;
	//while (!(str1[i] == '\0')) // DOESNT WORK
	for (; str1[i] != '\0'; ++i)
	{
		if (str1[i] == ' ') { 
			for (; j < i; ++j) {
				if (str1[j] == 'a' || str1[j] == 'e' || str1[j] == 'y' || str1[j] == 'u' || str1[j] == 'i' || str1[j] == 'o') {
					++sum;
				}
			}
		}
		else if (str1[i + 1] == '\0') {
			for (; j < i+1; ++j) {
				if (str1[j] == 'a' || str1[j] == 'e' || str1[j] == 'y' || str1[j] == 'u' || str1[j] == 'i' || str1[j] == 'o') {
					++sum;
				}
			}
		}
		else { continue; }
		switch_func(sum, one_syllable, two_syllable, three_syllable);
		sum = 0, j = i + 1;	
	}
	cout << "Количество слов, что имеют 1 слог: " << one_syllable << endl;
	cout << "Количество слов, что имеют 2 слогa: " << two_syllable << endl;
	cout << "Количество слов, что имеют 3 слогa: " << three_syllable << endl;
}

int switch_func(int sum, int &one_syllable, int &two_syllable, int &three_syllable) {
	switch (sum) {
		case 1: ++one_syllable; return one_syllable; break;
		case 2: ++two_syllable; return two_syllable; break;
		case 3: ++three_syllable; return three_syllable; break;
	}
}