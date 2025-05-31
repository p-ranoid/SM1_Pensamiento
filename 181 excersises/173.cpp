#include <iostream>
using namespace std;

bool esNumeroPerfecto(int numero) {
    if (numero <= 1) {
        return false;
    }

    int sumaDivisores = 1;
    
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }
    
    return sumaDivisores == numero;
}

int main() {
    int numero;
    cout << "Ingresa un numero para revisar si es perfecto: ";
    cin >> numero;
    
    if (esNumeroPerfecto(numero)) {
        cout << numero << " es un numero perfecto ✨." << endl;
    } else {
        cout << numero << " no es un numero perfecto." << endl;
    }
    
    return 0;
}