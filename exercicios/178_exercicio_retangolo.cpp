// Fazer programa ler altura e base retangulo e calcular area perimetro deste

#include <iostream>
#include <cmath>
using namespace std;


double calcRetangleArea (double base, double height) {
    return (double) base * height / 2;
};

double calcRetangleDiagonal (double base, double height) {
    return sqrt(pow(base, 2) + pow(height, 2));
};

double calcRetanglePerimeter (double base, double height) {
    double diagonal = calcRetangleDiagonal(base, height);
    return base + height + diagonal;
};

int main()
{
    double base, height;

    cout << "Insira base do retangulo: ";
    cin >> base;
    cout << endl;

    cout << "Insira a altura do retangulo: ";
    cin >> height;
    cout << endl;

    cout << "Valor da area do retangulo: " << calcRetangleArea(base, height) << endl;
    cout << "Valor da diagonal do retangulo: " << calcRetangleDiagonal(base, height) << endl;
    cout << "Valor do perimetro do retangulo: " << calcRetanglePerimeter(base, height) << endl;

    return 0;
};
