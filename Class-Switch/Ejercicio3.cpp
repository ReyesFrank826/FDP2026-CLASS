#include <iostream>

using namespace std;

int main(){

    char V;
    cout <<"\nIngresa una letra del" <<endl;
    cin >> V;


    switch(V){
        case 'L':
        cout <<endl<<"El dia es Lunes" <<endl;
        break;

        case 'M':
        cout <<endl<<"El dia es Martes" <<endl;
        break;

        case 'm':
        cout <<endl<<"El dia es Miercoles" <<endl;
        break;

        case 'J':
        cout <<endl<<"El dia es Jueves" <<endl;
        break;

        case 'V':
        cout <<endl<<"El dia es Viernes" <<endl;
        break;

        case 'S':
        cout <<endl<<"El dia es Sabado" <<endl;
        break;

        case 'D':
        cout <<endl<<"El dia es Domingo" <<endl;
        break;

        default:
        cout <<"\nDatos incorrectos";
        break;
    }

    return 0;
}