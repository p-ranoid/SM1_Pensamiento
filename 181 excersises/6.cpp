#include <iostream>
using namespace std;

int main(){
    float x;
    cout<<"ingresa un numero para calificar si es negativo, 0 o positivo\n";
    cin>>x;

    if(x<0){
        cout<<x<<" es negativo";
    }

    else if(x>0){
        cout<<x<<" es positivo";
    }

    else{
        cout<<x<<" es cero";
    }

    return 0;
}
