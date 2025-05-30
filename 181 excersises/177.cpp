#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Antes: x = " << x << ", y = " << y << endl;
    intercambiar(&x, &y);
    cout << "Después: x = " << x << ", y = " << y << endl;
    return 0;
}