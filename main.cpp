#include <iostream>
using namespace std;

bool controllo (char c){
    if (c >='A' and c <='Z'){
        return true;
    } else if(c >='a' and c<='z'){
        return true;
    } else {
        return false;
    }
}

char convertitore(char c) {
    char risultato;
    if (c >= 'A' and c <= 'Z') {
        risultato = c + 32;
    } else if (c >= 'a' and c <= 'z') {
        risultato = c - 32;
        return risultato;
    }
}

int main() {
    char input;
    char valore;
    cout << "Inserisci il carattere da convertire:" << endl;
    cin >> input;
    if (controllo(input)) {
        valore = convertitore(input);
        cout << " " << valore;
    } else {
        cout << "errore" << endl;
    }
    return 0;
}
