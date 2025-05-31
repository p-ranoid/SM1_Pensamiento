//Verificar si una cadena es un pangrama (contiene todas las letras del abecedario).
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string texto;
    bool letras[26] = {false};
    int contador = 0;

    cout << "Ingrese un texto para verificar si es pangrama (no incluye ñ): ";
    getline(cin, texto);

    for (char c : texto) {
        if (isalpha(c) && (tolower(c) >= 'a' && tolower(c) <= 'z')) {
            c = tolower(c);
            if (!letras[c - 'a']) {
                letras[c - 'a'] = true;
                contador++;
            }
        }
    }

    cout << (contador == 26 ? "SI es pangrama" : "NO es pangrama") << endl;
    return 0;
}