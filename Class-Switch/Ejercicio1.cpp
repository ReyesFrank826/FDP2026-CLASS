#include <iostream>

using namespace std;

int main(){

    int res, n;
    cout <<"\nHola, Porfavor ingrese un numero entero" <<endl;
    if(!(cin >> n)){
        cout <<"\nDatos incorrectos";
        return 1;
    }
    res = n%2;

    switch(res){
        case 1:
        cout <<endl<< n <<"s un numero impar" <<endl;
        break;

        case 0:
        cout <<endl<< n <<"s un numero par" <<endl;
        break;

        default:
        cout <<"\nDatos incorrectos";
        break;
    }

    return 0;
}