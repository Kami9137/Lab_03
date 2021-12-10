//Zadanie 1. - Tablice_1

#include <iostream>
using namespace std;

int main()
{
	int tab[10], temp = 3;

	for (int i = 0; i < 10; i++) {
		tab[i] = temp;
		temp += 3;
		cout << tab[i] << " ";
	}
}