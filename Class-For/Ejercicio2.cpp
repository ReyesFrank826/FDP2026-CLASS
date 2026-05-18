#include <iostream>

using namespace std;

int main(){

    int n;
    bool esPrimo = true;

    cout<<"Ingrese un numero entero ";
    cin >> n;

    if(n<=1){
        esPrimo=false;//marcar numeros negativos o 1 como falso
    }else{
        esPrimo;
    }

    for (int i=2; i * i <=n; i++){

        //imprimir el valor actual del i
        cout << n << endl;
        cout << i << endl;

        if(n%i==0){
            esPrimo=false;
        }
    }

    //mostrar resultado
    if(esPrimo){
        cout<<n <<" Es un numero primo"<<endl;
    }else{
        cout<<n <<" No es un numero primo"<<endl;
    }

    cout <<endl;
    return 0;
}