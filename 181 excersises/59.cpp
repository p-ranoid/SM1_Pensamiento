// :C
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, numero;
    vector<int> lista;
    int suma = 0;

    cout << "Cuantos numeros vas a ingresar? ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad debe ser mayor que cero\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Numero #" << i + 1 << ": ";
        cin >> numero;
        lista.push_back(numero);
        suma += numero;
    }

    double promedio = static_cast<double>(suma) / n;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
