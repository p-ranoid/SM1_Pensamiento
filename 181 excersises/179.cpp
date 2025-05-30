#include <iostream>
using namespace std;

int encontrarMaximo(int *arr, int tamaño) {
    if (tamaño == 0) return 0;
    
    int maximo = *arr; 
    int *ptr = arr + 1;
    
    for (int i = 1; i < tamaño; i++) {
        if (*ptr > maximo) {
            maximo = *ptr;
        }
        ptr++;
    }
    
    return maximo;
}

int main() {
    int tamaño;
    cout << "Ingresa el tamaño de la lista: ";
    cin >> tamaño;
    
    int *arreglo = new int[tamaño];
    
    cout << "Ingresa los " << tamaño << " valores:\n";
    for (int i = 0; i < tamaño; i++) {
        cout << "Valores " << i+1 << ": ";
        cin >> arreglo[i];
    }

    int max = encontrarMaximo(arreglo, tamaño);
    cout << "El valor máximo es: " << max << endl;

    delete[] arreglo;
    
    return 0;
}