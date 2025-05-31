#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cantidad;
    cout << "¿Cuántos números vas a ingresar? ";
    cin >> cantidad;

    vector<int> numeros(cantidad);
    int pares = 0, impares = 0;

    for (int i = 0; i < cantidad; ++i) {
        cout << "Número " << i + 1 << ":\n";
        cin >> numeros[i];

        if (numeros[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Cantidad de números pares: \n" << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}
