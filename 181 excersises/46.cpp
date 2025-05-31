//Implementar un sistema de reservas de boletos de cine.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int filas = 5, columnas = 5;
    vector<vector<char>> sala(filas, vector<char>(columnas, 'D'));

    int fila, columna;
    char continuar;

    do {
        // Mostrar sala
        cout << "\nEstado de la sala:\n";
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                cout << sala[i][j] << " ";
            }
            cout << endl;
        }

        // Reservar
        cout << "\nIngresa fila (0-" << filas - 1 << "): ";
        cin >> fila;
        cout << "Ingresa columna (0-" << columnas - 1 << "): ";
        cin >> columna;

        if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
            cout << "Asiento inválido.\n";
        } else if (sala[fila][columna] == 'R') {
            cout << "Ese asiento ya está reservado.\n";
        } else {
            sala[fila][columna] = 'R';
            cout << "Reserva exitosa!\n";
        }

        cout << "\n¿Deseas reservar otro asiento? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "\nGracias por usar el sistema de reservas.\n";

    return 0;
}
