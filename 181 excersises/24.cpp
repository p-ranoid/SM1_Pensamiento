#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingresa dos números para hayar el MCD: ";
    cin >> a >> b;

    while (b != 0) {
        int rest = a % b;
        a = b;
        b = rest;
    }

    cout << "MCD: " << a;

    return 0;
}