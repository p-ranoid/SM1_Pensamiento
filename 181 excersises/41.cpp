//Implementar un generador de contraseñas
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Generador de contraseñas\n";
    int length;
    cout << "Ingrese longitud de la contraseña: ";
    cin >> length;

    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    string password;
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < length; ++i) {
        password += chars[rand() % chars.size()];
    }

    cout << "Contraseña generada: " << password << "\n";

    return 0;
}
