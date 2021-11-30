#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char input;
    char valore;
    cout << "Inserisci il carattere da convertire:" << endl;
    cin >> input;
    if (controllo(input)) {
        cout << "Il carattere ottenuto e\':" << endl;
        valore = convertitore(input);
    } else {
        cout << "Errore" << endl;
    }
    return 0;
}
