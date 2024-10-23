// Fazer programa ler altura e base triangulo retangulo e calcular area perimetro deste

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


double calcTriangleRetangleArea (double base, double height) {
    return (double) base * height / 2;
};

double calcTriangleRetangleDiagonal (double base, double height) {
    return sqrt(pow(base, 2) + pow(height, 2));
};

double calcTriangleRetanglePerimeter (double base, double height) {
    double diagonal = calcTriangleRetangleDiagonal(base, height);
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

    cout << fixed <<setprecision(2);
    cout << "Valor da area do retangulo: " << calcTriangleRetangleArea(base, height) << endl;
    cout << "Valor da diagonal do retangulo: " << calcTriangleRetangleDiagonal(base, height) << endl;
    cout << "Valor do perimetro do retangulo: " << calcTriangleRetanglePerimeter(base, height) << endl;

    return 0;
};
