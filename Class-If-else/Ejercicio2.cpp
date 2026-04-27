#include <iostream>
#include <cmath>
using namespace std;

//calcular el area de un circulo lol

int main(){
    
    float r, pi=3.141526;
    int area;
    cout << "Bienvenido a la calculadora del area de un circulo" << endl <<endl;
    cout << "ingrese el radio de su circulo" << endl;
    cin >> r;

    //es la formula del area
    area = pi*(pow(r,2));

    if(area % 2 == 0){

    cout << "el area calculada es: " << area << " por lo tanto es par" << endl <<endl;

    }else{
    cout << "el area calculada es: " << area << " por lo tanto es impar" << endl <<endl;
    }


    return 0;
}

//en c++ no es necesario hacer conversiones, solo omite los decimales xd