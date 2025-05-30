#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio, area;
    const double PI = 3.14159265358979323846;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    area = PI * pow(radio, 2);
    cout << "El área del círculo es: " << area << endl;
    return 0;
}
