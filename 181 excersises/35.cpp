#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, objetivo;
    cout << "¿cuantos numeros vas a ingresar? ";
    cin >> n;

    vector<int> lista(n);
    cout << "ingresa los numeros:\n";
    for (int &x : lista) cin >> x;

    cout << "numero a buscar ";
    cin >> objetivo;

    int indice = -1;
    for (int i = 0; i < n; i++) {
        if (lista[i] == objetivo) {
            indice = i;
            break;
        }
    }

    if (indice != -1)
        cout << "primera ocurrencia en el indice " << indice;
    else
        cout << "el numero no esta en la lista";

    return 0;
}