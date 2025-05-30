#include <iostream>
using namespace std;

int contarCaracteres(const char *chain) {
    int counter = 0;
    while (*chain != '\0') {
        counter++;
        chain++;
    }
    return counter;
}

int main() {
    char texto[100];
    
    cout << "Ingresa un texto de maximo 100 caracteres: ";
    cin.getline(texto, 100);
    
    int longitud = contarCaracteres(texto);
    cout << "El texto tiene " << longitud << " caracteres." << endl;
    
    return 0;
}