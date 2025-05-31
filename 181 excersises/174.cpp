#include <iostream>
using namespace std;

double calcularArea(double* base, double* altura) {
    return (*base * *altura) / 2.0;
}

int main() {
    double base, altura;
    
    cout << "Ingresa la base del triangulo: ";
    cin >> base;
    
    cout << "Ingresa la altura del triangulo: ";
    cin >> altura;
    
    double area = calcularArea(&base, &altura);
    
    cout << "El area del triangulo es: " << area << endl;
    
    return 0;
}