#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    cout << "Ingresa un número (entero):\n";
    cin >> N;

    for (int i = 2; i <= N; i += 2) {
        suma += i;
    }

    cout << "la suma de los pares hasta el " << N << " es: " << suma;
}
