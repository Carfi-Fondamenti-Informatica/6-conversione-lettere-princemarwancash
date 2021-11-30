#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char input;
    char valore;
    cin >> input;
    if (controllo(input)) {
        valore = convertitore(input);
        cout << valore;
    } else {
        cout << "errore" << endl;
    }
    return 0;
}
