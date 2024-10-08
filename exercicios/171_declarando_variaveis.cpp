// imprimir na tela
#include <iostream>

// formatar numero casas decimais
#include <iomanip>

// formatar string
#include <string>

using namespace std;

int main() {
    // declarando variaveis
    int idade;
    double salario, altura;
    char genero;
    string nome;

    // setando valor das variaveis
    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    nome = "Maria Silva";

    // configurar numero casas decimais
    cout << fixed << setprecision(2);
    cout << "Idade = " << idade << endl;
    cout << "Salario = " << salario << endl;
    cout << "Altura = " << altura << endl;
    cout << "Genero = " << genero << endl;
    cout << "Nome = " << nome << endl;

    return 0;
};
