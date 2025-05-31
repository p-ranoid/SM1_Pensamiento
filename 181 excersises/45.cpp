//generar numeros primos hasta un valor dado.
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "ingresa el valor maximo.(numeros enteros):\n ";
    cin >> N;

    cout << "Numeros primos hasta " << N << ":\n";

    for (int i = 2; i <= N; i++) {
        bool esPrimo = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
