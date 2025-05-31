#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "ingresa una palabra (o una frase sin espacios) y veremos si es palindromo:\n";
    cin >> palabra;

    int inicio = 0;
    int fin = palabra.length() - 1;
    bool esPalindromo = true;

    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            esPalindromo = false;
            break;
        }
        inicio++;
        fin--;
    }

    if (esPalindromo)
        cout << "La palabra es un palindromo.";
    else
        cout << "La palabra no es un palindromo.";

    return 0;
}
