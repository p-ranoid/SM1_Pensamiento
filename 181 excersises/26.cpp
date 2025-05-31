#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int dice = rand() % 6 + 1;

    cout << "Lanzamiento del dado: " << dice;

    return 0;
}
