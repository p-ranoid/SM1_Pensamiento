#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int cantidad;
    cout << "cantidad de numeros a ingresar para ordenarlos de mayor a menor: \n ";
    cin >> cantidad;

    vector<int> numeros(cantidad);

    for (int i = 0; i < cantidad; ++i) {
        cout << "numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

    cout << "\nnumeros ordenados de menor a mayor: ";
    for (int n : numeros) {
        cout << n << " ";
    }
}
