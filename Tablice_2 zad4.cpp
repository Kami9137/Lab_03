// Tablice_2 - Zadanie 3

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Podaj swoje imie: ";
    string imie;
    getline(cin, imie);

    cout << "Podaj swoje nazwisko: ";
    string nazwisko;
    getline(cin, nazwisko);

    // Laczenie danych:
    cout << "Nazywasz sie: ";
        string suma = imie + " " + nazwisko;
    cout << suma << endl;

    // Kopiowanie danych:
    cout << "Kopia twoich danych osobowych: ";
    string copy;
    copy = suma;
    cout << copy << endl;

    // Dlugosc ciagu tekstowego:
    cout << "Dlugosc ciagu tekstowego: " << suma.length() << endl;
}
