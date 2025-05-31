#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string numero;
    cout << "Ingresa un numero para invertir\n";
    cin >> numero;
    bool negativo = false;

    if (numero[0] == '-') {
        negativo = true;
        numero = numero.substr(1);
    }

    reverse(numero.begin(), numero.end());

    if (negativo) {
        numero = "-" + numero;
    }
    cout << " tu numero invertido es: " << numero << endl;

    return 0;
}
