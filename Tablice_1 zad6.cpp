//Zadanie 6. - Tablice_1

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int tab[20];
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		if (i < 10) {
			tab[i] = rand() % 50 - 0;
			cout << tab[i] << " ";
		}
		else {
			cout << tabflo[5];
		}
	}
}