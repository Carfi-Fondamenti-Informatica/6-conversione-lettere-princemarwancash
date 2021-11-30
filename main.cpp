#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char input;
    char valore;
    cout << "Inserisci il carattere da convertire:" << endl;
    cin >> input;
    if (controllo(input)) {
        valore = convertitore(input);
        cout << "Il carattere ottenuto e\':" << " " << valore;
    } else {
        cout << "Errore" << endl;
    }
    return 0;
}
