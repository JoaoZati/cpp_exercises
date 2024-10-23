// conditional operator
#include <iostream>
using namespace std;

int main() {
    // user input
    int x, y;

    // program
    string crescente, textoInput;

    textoInput = "Digite dois numeros (para saior digite dois numeros iguais): ";

    cout << textoInput << endl;
    cin >> x >> y;

    while (1) {
        if (x == y) {
            cout << "IGUAIS, saindo..." << endl;
            break;
        };

        crescente = (x > y) ? "DECRESCENTE": "CRESCENTE";

        cout << crescente << endl;

        cout << textoInput << endl;
        cin >> x >> y;
    };

    return 0;
}