//Overcooked (estoy en la mrd)
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> alimentos;
    string nombre;
    int calorias, cantidad;

    cout << "Cuantos alimentos vas a jartar? ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre del alimento #" << i + 1 << ": ";
        cin >> nombre;
        cout << "Calorias de " << nombre << ": ";
        cin >> calorias;
        alimentos[nombre] = calorias;
    }

    int totalCalorias = 0;
    for (auto& par : alimentos) {
        totalCalorias += par.second;
    }

    cout << "\nCalorias totales consumidas: " << totalCalorias << endl;

    return 0;
}
