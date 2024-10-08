// inclui bibliotecass
#include <bits/stdc++.h>

using namespace std;

int main() {
    int idade;
    string nome;

    cout << "Digite sua Idade: ";
    cin >> idade;
    cout << "Digite seu nome completo: ";

    // limpa o buffer
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome);

    // volta inteiro
    cout << "Nome: " << nome << ", Idade: " << idade << endl;

    return 0;
};
