//adivinanza de numeros
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int secreto = rand() % 100 + 1;
    int intento;
    int intentos = 0;

    cout << "averigua el numero (NUMDLE)\n";

    do {
        cout << "Tu intento: ";
        cin >> intento;
        intentos++;

        if (intento < secreto) {
            cout << "Muy bajo. Intenta de nuevo.\n";
        } else if (intento > secreto) {
            cout << "Muy alto. Intenta de nuevo.\n";
        } else {
            cout << "¡Correcto! Adivinaste en " << intentos << " intento(s).\n";
        }

    } while (intento != secreto);

    return 0;
}
