#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, temp;
    cout << "Antes: a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    
    cout << "Cambio magico: a = " << a << ", b = " << b << endl;
    return 0;
}
