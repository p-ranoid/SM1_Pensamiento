//piedra papel o tijera
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Juego: Piedra, Papel o Tijeras\n";
    string opciones[3] = {"piedra", "papel", "tijeras"};

    srand(static_cast<unsigned>(time(0)));

    cout << "Ingrese piedra, papel o tijeras: ";
    string jugador;
    cin >> jugador;

    int pc = rand() % 3;
    cout << "PC eligió: " << opciones[pc] << "\n";

    if (jugador == opciones[pc]) {
        cout << "Empate!\n";
    } else if ((jugador == "piedra" && opciones[pc] == "tijeras") ||
               (jugador == "papel" && opciones[pc] == "piedra") ||
               (jugador == "tijeras" && opciones[pc] == "papel")) {
        cout << "Ganaste!\n";
    } else {
        cout << "Perdiste!\n";
    }

    return 0;
}
