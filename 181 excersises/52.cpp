 //mejorar las elecciones de colombia
 #include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> votos;
    string candidato;
    int cantidadVotantes;

    cout << "Cuantos votantes participaran? ";
    cin >> cantidadVotantes;

    for (int i = 0; i < cantidadVotantes; i++) {
        cout << "Votante #" << i + 1 << ", ingrese el nombre del candidato por el que votara: ";
        cin >> candidato;
        votos[candidato]++;
    }

    cout << "\nResultados finales:\n";
    for (auto& par : votos) {
        cout << par.first << ": " << par.second << " votos\n";
    }

    return 0;
}
