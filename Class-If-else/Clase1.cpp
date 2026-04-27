#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int y, x;

    //te pide el numero "y"
    cout << "please enter a number:" << endl <<endl;
    cin >> y;

    //esto lo eleva por si mismo, osea y, fuera distinto si en vez del primer y se pone otro numero
    x = pow(y,y);
    cout << x << " es el valor de x" <<endl <<endl;


    //esto comprueba si el residuo (%) es cero, por definicion un numero par es divisble etre 2 hasta que su residuo es cero
    if (x % 2 ==0){
        cout << "The number " << x << " is even." << endl;
    }else{
        cout << "The number " << x << " is odd." << endl;
    };

    //funcion extra para comprobar si es positivo o negativo
    if (y < 0){
        cout << "the number " << y << " is negative" <<endl;
    } else {
        cout << "the number " << y << " is positive" <<endl;
    }

    return 0;
};