//menorrrrrrrrr
#include <iostream>
using namespace std;

int main() {
    int n, numero, menor;

    cout << "Cuantos numeros vas a ingresar? ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad debe ser mayor que cero\n";
        return 0;
    }

    cout << "Ingresa el numero #1: ";
    cin >> numero;
    menor = numero;

    for (int i = 2; i <= n; i++) {
        cout << "Ingresa el numero #" << i << ": ";
        cin >> numero;
        if (numero < menor)
            menor = numero;
    }

    cout << "El numero mas pequeño es: " << menor << endl;

    return 0;
}
