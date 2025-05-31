#include <iostream>
using namespace std;

void tablaMultiplicar(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i;
    }
}

int main() {
    int numero;
    cout << "Ingresa un numero para ver su tabla de multiplicar: ";
    cin >> numero;

    tablaMultiplicar(numero);

    return 0;
}
