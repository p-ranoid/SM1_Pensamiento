#include <iostream>
using namespace std;
int main (){

    int x;
    cout<< "ingresa un numero para sacarle factorial\n";
    cin>>x;
    if(x<0){
        cout<<"sea serio, numeros positivos";
    }
    else{

        int resultado=1;
        for (int i = 2; i <= x; i++)
        {
            resultado *= i;
        }
        
        cout<<"el factorial de "<<x<< " es: "<<resultado;
    }
    return 0;
}