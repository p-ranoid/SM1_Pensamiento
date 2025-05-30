#include <iostream>
using namespace std;

int main() {
    int entero = 42;
    double decimal = 3.1416;
    char caracter = 'A';
    string texto = "Probando direccion de memoria";

    cout << "Direcciones de memoria:\n";
    cout << "Entero (" << entero << "): " << &entero << endl;
    cout << "Decimal (" << decimal << "): " << &decimal << endl;
    cout << "Caracter (" << caracter << "): " << (void*)&caracter << endl;
    cout << "Texto (" << texto << "): " << &texto << endl;

    cout << "\nTamaños en bytes:\n";
    cout << "Entero: " << sizeof(entero) << endl;
    cout << "Decimal: " << sizeof(decimal) << endl;
    cout << "Caracter: " << sizeof(caracter) << endl;
    cout << "Texto (string): " << sizeof(texto) << endl;

    return 0;
}