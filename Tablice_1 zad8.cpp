//Zadanie 8 - Tablice_1

#include <iostream>
using namespace std;

int main()
{
	int tab[2][2], tab1[2][2], sumam[2][2];
	cout << "Podaj elementy macierzy 1: " << endl;
		//macierz 1
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Podaj element " << i + 1 << " - " << j + 1 << ": ";
			cin >> tab[i][j];
		}
	}
	cout << "Podaj elementy macierzy 2: " << endl;
		//macierz 2
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Podaj element " << i + 1 << " - " << j + 1 << ": ";
			cin >> tab1[i][j];
				//suma
			sumam[i][j] = tab[i][j] + tab1[i][j]; 
		}
	}
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << sumam[i][j] << " ";
			cout << endl;
	}
}
