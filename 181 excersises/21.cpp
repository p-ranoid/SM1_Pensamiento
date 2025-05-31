#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número decimal:\n";
    cin >> numero;

    if (numero == 0) {
        cout << "Binario: 0\n";
        return 0;
    }

    string binario = "";

    while (numero > 0) {
        int residuo = numero % 2;
        binario = to_string(residuo) + binario;
        numero /= 2;
    }

    cout << "Binario: " << binario;

    return 0;
}
