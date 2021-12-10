//Zadanie 3. - Tablice_1

#include <iostream>
using namespace std;

int main()
{
	int tab[10], a, b=0;

	cout << "Podaj wartosc a: ", cin >> a;

	for (int i = 9; i >= 0; i--) {
		tab[i] = a - b;
		b += 5;
	}

	for (int i = 0; i < 10; i++) {
		cout << tab[i] << " ";
	}
}