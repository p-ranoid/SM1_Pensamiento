#include <iostream>
#include <cmath>
using namespace std;

bool esPotenciaExacta(int n) {
    if (n == 1) return true;
    for (int a = 2; a <= sqrt(n); a++) {
        int b = 2;
        while (pow(a, b) <= n) {
            if (pow(a, b) == n) return true;
            b++;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Ingrese número: ";
    cin >> n;
    cout << n << (esPotenciaExacta(n) ? " es" : " no es") << " potencia exacta" << endl;
    return 0;
}