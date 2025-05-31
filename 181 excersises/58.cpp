//matar al chiquito
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, numero;
    vector<int> lista;

    cout << "Cuantos numeros vas a ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Numero #" << i + 1 << ": \n";
        cin >> numero;
        lista.push_back(numero);
    }

    if (lista.empty()) {
        cout << "La lista esta vacia\n";
        return 0;
    }

    lista.erase(lista.begin());

    cout << "matamos al chiquito:\n";
    for (int num : lista)
        cout << num << " ";

    cout << endl;
    return 0;
}
