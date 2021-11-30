#include <iostream>
#include "lib.h"
using namespace std;

int main (){
    char a;
    cin >> a;
    cout << controllo(a) << endl;
    if (controllo(a)){
        convertitore(a);
    } else {
        cout << "Errore" << endl;
    }
    return 0;
}
