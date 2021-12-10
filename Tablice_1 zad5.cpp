//Zadanie 5. - Tablice_1

#include <iostream>
using namespace std;

int main()
{
	int tab[10];

	for (int i = 0; i < 10; i++) {
		if (i < 2) {
			cout << "Podaj tab[" << i<< "] = ", cin >> tab[i];
		}
		else {
			tab[i] = tab[i - 1] + tab[i - 2];
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << tab[i] << " ";
	}
}