#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cantidad;
    cout << "¿Cuantos numeros vas a ingresar?\n";
    cin >> cantidad;

    vector<int> numeros(cantidad);
    double suma = 0;

    for (int i = 0; i < cantidad; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    double promedio = suma / cantidad;

    cout << "el promedio es: " << promedio << endl;

    return 0;
}
