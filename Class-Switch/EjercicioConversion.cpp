#include <iostream>

using namespace std;

int main(){

    int num;
    float result, USD;

    cout <<endl<<"Ingrese USD" <<endl;
    if(!(cin >> USD)){
        cout <<"\nDatos incorrectos, ingrese un numero valido";
        return 1;
    }

    if(USD <0){
        cout <<"\nDatos incorrectos, ingrese un numero valido";
        return 1;
    }

    cout <<"\nIngresa un numero (del 1-3)" <<endl;
    cout <<"\n1 = USD a EUR" <<endl;
    cout <<"\n2 = USD a JPY" <<endl;
    cout <<"\n3 = USD a GBP" <<endl;
    cin >> num;

    if(num < 1 || num > 3){
        cout <<"\nDatos incorrectos, ingrese un numero valido";
        return 1;
    }

    switch(num){
        case 1:
        result = USD * 0.85;        
        cout <<endl<<USD << "$ USD   ->     " << result << "   EUR"<<endl;
        break;

        case 2:
        result = USD * 157.23;        
        cout <<endl<<USD << "$ USD   ->     " << result << "   JPY"<<endl;
        break;

        case 3:
        result = USD * 0.74;        
        cout <<endl<<USD << "$ USD   ->     " << result << "   GBP"<<endl;
        break;


        default:
        cout <<"\nDatos incorrectos";
        return 1;
        break;
    }

    return 0;
} //ya esta mas optimizado