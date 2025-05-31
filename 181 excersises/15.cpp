#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "ingresa un numero N: ";
    cin >> N;

    if (N < 0) {
        cout << "numeros positivo por favor";
        return 1;
    }

    int suma = N * (N + 1) / 2;

    cout << "La suma de los primeros " << N << " numeros naturales es: " << suma;

    return 0;
}
