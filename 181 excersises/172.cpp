#include <iostream>
using namespace std;

void decimalABinarioRecursivo(int* nPtr) {
    if (*nPtr > 1) {
        int temp = *nPtr / 2;
        decimalABinarioRecursivo(&temp);
    }
    cout << (*nPtr % 2);
}

int main() {
    int numero;
    cout << "Ingresa un numero decimal: ";
    cin >> numero;
    
    cout << "El numero " << numero << " en binario es: ";
    decimalABinarioRecursivo(&numero);
    cout << endl;
    
    return 0;
}