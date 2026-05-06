#include <iostream>

using namespace std;

int main(){

    int dia;
    cout <<"\nIngresa un numero (del 1-7)" <<endl;
    cin >> dia;

    if(dia < 1 || dia > 7){
        cout <<"\nDatos incorrectos, ingrese un numero valido";
        return 1;
    }

    switch(dia){
        case 1:
        cout <<endl<<"El dia es Lunes" <<endl;
        break;

        case 2:
        cout <<endl<<"El dia es Martes" <<endl;
        break;

        case 3:
        cout <<endl<<"El dia es Miercoles" <<endl;
        break;

        case 4:
        cout <<endl<<"El dia es Jueves" <<endl;
        break;

        case 5:
        cout <<endl<<"El dia es Viernes" <<endl;
        break;

        case 6:
        cout <<endl<<"El dia es Sabado" <<endl;
        break;

        case 7:
        cout <<endl<<"El dia es Domingo" <<endl;
        break;

        default:
        cout <<"\nDatos incorrectos, ingrese un numero valido";
        break;
    }

    return 0;
}