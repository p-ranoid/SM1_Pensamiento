#include <iostream>
#include <string>
using namespace std;

int contarCaracteres(const char *cadena) {
    int contador = 0;
    while (*cadena != '\0') {
        contador++;
        cadena++;
    }
    return contador;
}

int main() {
    string entrada;
    cout << "Ingresa un texto: ";
    getline(cin, entrada);
    const char *texto = entrada.c_str();
    
    int longitud = contarCaracteres(texto);
    cout << "El texto tiene " << longitud << " caracteres." << endl;
    
    return 0;
}
