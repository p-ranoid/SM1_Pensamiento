#include <iostream>
using namespace std;

int sumaCuadrados(int n) {
    return n * (n + 1) * (2*n + 1) / 6;
}

int main() {
    int n;
    cout << "Ingresa N: ";
    cin >> n;
    cout << "Suma de cuadrados: " << sumaCuadrados(n) << endl;
    return 0;
}