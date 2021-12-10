// Tablice_2 - Zadanie 6

#include <iostream>
#include <string>
using namespace std;


int main()
{
       
    int s_samogloski = 0, s_spolgloski = 0;
    cout << "Wprowadz tekst aby sprawdzic ilosc spolglosek i samoglosek: " << endl;
    string tekst;
    getline(cin, tekst);

    string spolgloski = "bcdfghjklmnpqrstwxzBCDFGHJKLMNPRQSTWXZ";

    for (int i = 0; i < tekst.size(); i++) {
        for (int j = 0; j < spolgloski.size(); j++) {
            if (tekst[i] == spolgloski[j])s_spolgloski++;
        }
    }

    string samogloski = "aąeęiouyAĄEĘIOUY";

    for (int i = 0; i < tekst.size(); i++) {
        for (int j = 0; j <samogloski.size(); j++) {
            if (tekst[i] == samogloski[j])s_samogloski++;
        }
    }
    cout << "Ilosc spolglosek: " << s_spolgloski << endl;
    cout << "Ilosc samoglosek: " << s_samogloski;
}