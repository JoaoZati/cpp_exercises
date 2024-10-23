// conditional operator
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nomes[N];
    int idades [N], idadeMenor, contagemMenor;
    double alturas[N], somaAlturas, mediaAlturas, porcentagemMenores;

    idadeMenor = 16;

    for (int i = 0; i < N; i++) {
        cout << "Dados da "<< i + 1 << "a pessoa: " << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    };

    somaAlturas = 0;
    contagemMenor = 0;
    for (int i = 0; i < N; i ++) {
        somaAlturas += alturas[i];

        if (idades[i] < 16) {
            contagemMenor++;
        };
    };

    mediaAlturas = (double) somaAlturas / N;
    porcentagemMenores = (double) contagemMenor * 100 / N;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << mediaAlturas << endl;

    cout << fixed << setprecision(1);
    cout
        << "Porcentagem pessoas com menos de "
        << idadeMenor
        << ": "
        << porcentagemMenores
        << "%"
        << endl;

    for (int i = 0; i < N; i++) {
        if (idades[i] < idadeMenor) {
            cout
                << "Pessoas menores que: "
                << idadeMenor
                << endl;

            cout << nomes[i] << endl;
        };
    };

    return 0;
};
