#include <iostream>
using namespace std;
int main()
{
    int x, soma;
    soma = 0;
    cout << "Digite o primeiro numero: ";
    cin >> x;
    while (true)
    {
        soma = soma + x;
        cout << "Digite outro numero: ";
        cin >> x;

        if (x == 0) {
            break;
        }
    }
    cout << "SOMA = " << soma;
    return 0;
}