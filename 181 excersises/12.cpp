#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero;
    cout << "Ingresa un numero para sumar sus digitos:\n";
    cin >> numero;

    if (numero[0] == '-') {
        numero = numero.substr(1);
    }

    int suma = 0;

    for (char digito : numero) {
        if (isdigit(digito)) {                  
            suma += digito - '0';
        }
    }

    cout << "La suma de los digitos es: " << suma;
}
