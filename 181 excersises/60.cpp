//cuadratica mi pasion , amor, luz y compañia
#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;

    if (a == 0) {
        cout << "No es una ecuacion cuadratica\n";
        return 0;
    }

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        cout << "La ecuacion tiene 2 soluciones reales\n";
    } else if (discriminante == 0) {
        cout << "La ecuacion tiene 1 solucion real\n";
    } else {
        cout << "La ecuacion no tiene soluciones reales\n";
    }

    return 0;
}
