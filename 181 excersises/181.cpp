#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la lista: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Ingresa los " << n << " valores del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cout << "valor " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nLista ingresada:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}
