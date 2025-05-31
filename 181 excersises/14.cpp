#include <iostream>
using namespace std;

int main() {
    int año;
    cout << "Ingresa un año y veremos si es bisiesto\n";
    cin >> año;

    bool esBisiesto = false;

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        esBisiesto = true;
    }

    if (esBisiesto) {
        cout << año << " es un año bisiesto." << endl;
    } else {
        cout << año << " no es un año bisiesto." << endl;
    }

    return 0;
}
