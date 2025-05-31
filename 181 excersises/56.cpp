//  mayorrrrr
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, numero, mayor;

    cout << "Cuantos numeros vas a ingresar? ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad debe ser mayor que cero\n";
        return 0;
    }

    cout << "Ingresa el numero #1: ";
    cin >> numero;
    mayor = numero;

    for (int i = 2; i <= n; i++) {
        cout << "Ingresa el numero #" << i << ": ";
        cin >> numero;
        if (numero > mayor)
            mayor = numero;
    }

    cout << "El numero mas grande es: " << mayor << endl;

    return 0;
}
