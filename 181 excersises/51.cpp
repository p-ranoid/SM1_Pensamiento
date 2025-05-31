//Implementar un analizador de expresiones matemáticas.
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operador;

    cout << "Ingresa una expresion (ej. 3+2): ";
    cin >> num1 >> operador >> num2;

    switch (operador) {
        case '+':
            cout << "Es una suma. El resultado es: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Es una resta. El resultado es: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Es una multiplicacion. El resultado es: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: division por cero.\n";
            } else {
                cout << "Es una division. El resultado es: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Operador no valido.\n";
    }

    return 0;
}
