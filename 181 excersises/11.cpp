#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero;
    cout << "Ingresa un numero:\n ";
    cin >> numero;

    if (numero[0] == '-') {
        numero = numero.substr(1);
    }

    cout << "Cantidad de digitos: " << numero.length() << endl;

    return 0;
}
