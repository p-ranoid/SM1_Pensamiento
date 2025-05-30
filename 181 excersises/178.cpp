#include <iostream>
using namespace std;

int sumarElementos(int* Lista, int tamaño) {
    int suma = 0;
    int* ptr = Lista;
    
    for(int i = 0; i < tamaño; i++) {
        suma += *ptr; 
        ptr++;      
    }
    
    return suma;
}

int main() {
    int tamaño;
    cout << "Ingresa el tamaño de la lista: ";
    cin >> tamaño;
    
    int* lista = new int[tamaño];
    
    cout << "Ingresa los " << tamaño << " valores:\n";
    for(int i = 0; i < tamaño; i++) {
        cout << "valores " << i+1 << ": ";
        cin >> lista[i];
    }
    
    int total = sumarElementos(lista, tamaño);
    cout << "La suma de los elementos es: " << total << endl;

    delete[] lista;
    
    return 0;
}