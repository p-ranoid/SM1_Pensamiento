#include <iostream>
#include <vector>
using namespace std;

void imprimirZigZag(int filas, int columnas) {
    vector<vector<int>> matriz(filas, vector<int>(columnas));
    int valor = 1;
    bool haciaAbajo = false;

    for (int col = 0; col < columnas; col++) {
        if (haciaAbajo) {
            for (int fila = filas - 1; fila >= 0; fila--) {
                matriz[fila][col] = valor++;
            }
        } else {
            for (int fila = 0; fila < filas; fila++) {
                matriz[fila][col] = valor++;
            }
        }
        haciaAbajo = !haciaAbajo;
    }

    for (int fila = 0; fila < filas; fila++) {
        for (int col = 0; col < columnas; col++) {
            cout << matriz[fila][col] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;
    cout << "Ingresa numero de filas: ";
    cin >> filas;
    cout << "Ingresa numero de columnas: ";
    cin >> columnas;

    imprimirZigZag(filas, columnas);

    return 0;
}