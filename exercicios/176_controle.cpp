// controle de fluxo

// if (condição1) {
//  comando1
//  comando2
// }
// else if (condição2) {
//  comando3
//  comando4
// }
// else {
//  comando5
//  comando6
// }

// inclui bibliotecass
#include <bits/stdc++.h>

using namespace std;

int main() {
    int hora;

    cout << "Digite uma hora do dia: ";
    cin >> hora;
    if (hora < 12) {
        cout << "Bom dia!" << endl;
    }
    else {
        cout << "Boa tarde!" << endl;
    }
    return 0; 
};
