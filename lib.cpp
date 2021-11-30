#include "lib.h"
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
