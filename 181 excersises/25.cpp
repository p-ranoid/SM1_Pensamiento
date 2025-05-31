#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingresa dos numeros para hayar el MCM:\n";
    cin >> a >> b;

    int x = a, y = b;

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    int mcd = a;
    int mcm = (x * y) / mcd;

    cout << "MCM: " << mcm;

    return 0;
}

