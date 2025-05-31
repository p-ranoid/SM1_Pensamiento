#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int randomn = rand() % 100 + 1;

    cout << "numero aleatorio entre 1 y 100: " << randomn;

    return 0;
}
