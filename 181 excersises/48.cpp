//Crear un conversor de moneda.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double cantidad;
    int opcion;

    cout << fixed << setprecision(2);

    cout << "Conversor de Monedas\n";
    cout << "1. USD a EUR\n";
    cout << "2. USD a COP\n";
    cout << "3. EUR a USD\n";
    cout << "4. COP a USD\n";
    cout << "Elige una opcion (1-4): ";
    cin >> opcion;

    cout << "Ingresa la cantidad: ";
    cin >> cantidad;

    switch (opcion) {
        case 1:
            cout << cantidad << " USD = " << cantidad * 0.88 << " EUR\n";
            break;
        case 2:
            cout << cantidad << " USD = " << cantidad * 4100 << " COP\n";
            break;
        case 3:
            cout << cantidad << " EUR = " << cantidad * 1.13 << " USD\n";
            break;
        case 4:
            cout << cantidad << " COP = " << cantidad / 4100 << " USD\n";
            break;
        default:
            cout << "Opción inválida.\n";
    }

    return 0;
}
