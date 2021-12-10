//Zadanie 2. Do programu z zadania 1 dodaj instrukcje wyświetlające co drugą wartość z tablicy.

#include <iostream>
using namespace std;

int main()
{
	int tab[10], temp = 3;

	for (int i = 0; i < 10; i++) {
		tab[i] = temp;
		temp += 3;
		if (i % 2 != 0)
			cout << tab[i] << " ";
	}
}