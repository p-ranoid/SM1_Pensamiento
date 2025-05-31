//Implementar un sistema de notas para estudiantes.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int numEstudiantes, numNotas;

    cout << "¿cuantos estudiantes deseas ingresar?: ";
    cin >> numEstudiantes;

    cout << "¿cuantas notas por estudiante?: ";
    cin >> numNotas;

    vector<string> nombres(numEstudiantes);
    vector<vector<float>> notas(numEstudiantes, vector<float>(numNotas));
    vector<float> promedios(numEstudiantes);

    for (int i = 0; i < numEstudiantes; i++) {
        cout << "\nNombre del estudiante " << i + 1 << ": ";
        cin >> nombres[i];

        float suma = 0;
        for (int j = 0; j < numNotas; j++) {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
            suma += notas[i][j];
        }
        promedios[i] = suma / numNotas;
    }
    cout << "\n--- Resultados ---\n";
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Estudiante: " << nombres[i] << " | Promedio: " << promedios[i] << endl;
    }

    return 0;
}
