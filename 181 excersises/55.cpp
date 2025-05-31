//IBM 🗣️🗣️
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double peso, altura, imc;

    cout << "Ingresa tu peso en kilogramos: ";
    cin >> peso;

    cout << "Ingresa tu altura en metros: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Tu IMC es: " << imc << endl;

    if (imc < 18.5)
        cout << "Clasificacion: Bajo peso🩻\n";
    else if (imc < 24.9)
        cout << "Clasificacion: Normal 🤙🏻\n";
    else if (imc < 29.9)
        cout << "Clasificacion: Sobrepeso \n";
    else
        cout << "Clasificacion: Obesidad\n";

    return 0;
}
