//Desarrollar un sistema de autenticación con usuarios y contraseñas.
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> usuarios;

    usuarios["sebastian"] = "1234";
    usuarios["admin"] = "adminpass";
    usuarios["miranda"] = "miranda123";
    usuarios["yuri"] = "purrmiau";

    string usuario, contraseña;

    cout << "Iniciar sesion\n";
    cout << "Usuario: ";
    cin >> usuario;
    cout << "Contraseña: ";
    cin >> contraseña;

    if (usuarios.count(usuario) && usuarios[usuario] == contraseña) {
        cout << "Bienvenid@, " << usuario<<"\n";
    } else {
        cout << "Usuario o contraseña incorrectos.\n";
    }

    return 0;
}
