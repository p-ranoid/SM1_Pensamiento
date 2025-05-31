#include <iostream>
#include <vector>
using namespace std;

int encontrarIndice(const vector<int>& vec, int elemento) {
    const int* ptr = vec.data();
    for(int i = 0; i < vec.size(); i++) {
        if(*(ptr + i) == elemento) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> lista;
    int tamaño, elemento;

    cout << "Ingresa el tamaño de la lista: ";
    cin >> tamaño;

    cout << "Ingresa los valores de la lista:\n";
    for(int i = 0; i < tamaño; i++) {
        cout << "Valores " << i+1 << ": ";
        cin >> elemento;
        lista.push_back(elemento);
    }

    cout << "Ingresa el valor a buscar: ";
    cin >> elemento;

    int indice = encontrarIndice(lista, elemento);

    if(indice != -1) {
        cout << "El valor " << elemento << " se encuentra en la lista " << indice << endl;
    } else {
        cout << "El valor " << elemento << " no se encuentra en la lista" << endl;
    }

    return 0;
}