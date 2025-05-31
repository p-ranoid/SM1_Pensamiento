// Desarrollar un sistema de puntuaciones para un juego.
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> puntuaciones;
    int cantidadJugadores;
    string nombre;
    int puntos;

    cout << "Cuantos jugadores hay? ";
    cin >> cantidadJugadores;

    for (int i = 0; i < cantidadJugadores; i++) {
        cout << "Nombre del jugador #" << i + 1 << ": ";
        cin >> nombre;
        cout << "Puntaje de " << nombre << ": ";
        cin >> puntos;
        puntuaciones[nombre] = puntos;
    }

    string mejorJugador;
    int maxPuntos = -1, total = 0;

    for (auto& par : puntuaciones) {
        if (par.second > maxPuntos) {
            maxPuntos = par.second;
            mejorJugador = par.first;
        }
        total += par.second;
    }

    double promedio = (cantidadJugadores > 0) ? (double)total / cantidadJugadores : 0;

    cout << "\nMejor jugador: " << mejorJugador << " con " << maxPuntos << " puntos\n";
    cout << "Promedio de puntajes: " << promedio << endl;

    return 0;
}
