// Tablice_2 - Zadanie 5

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int skill, staz;
    string ulica, nrdom;

    cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
    getline(cin, ulica);

    cout << "Podaj nr domu: ";
    getline(cin, nrdom);

    cout << "Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 5]: ";
    cin >> skill;

    cout << "Twoj staz programistyczny: ";
    cin >> staz;

    cout << "Adres: ";
    string suma = ulica + " " + nrdom;
    cout << suma << endl;

    cout << "Ocena: " << skill-1 << endl;

    cout << "Staz: " << staz << " dni" << endl;
}
