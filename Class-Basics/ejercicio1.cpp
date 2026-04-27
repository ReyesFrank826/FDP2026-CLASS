#include <iostream>

using namespace std;

int main(){

    // Suma de 2 numeros

    float num1, num2;

    cout << "Ingrese un numero: ";
    cin >> num1;

    cout << "Ingrese otro numero: ";
    cin >> num2;

    float suma = num1 + num2;

    cout << "La suma de tus numeros es: " << suma << endl << endl;

// Promedio de 3 números

    float num3, num4, num5;

    cout << "Ingrese el primer numero: ";
    cin >> num3;

    cout << "Ingrese el segundo numero: ";
    cin >> num4;

    cout << "Ingrese el primer numero: ";
    cin >> num5;

    float promedio = (num3 + num4 + num5)/3;

    cout << "El promedio de los numeros ingresados es de: " << promedio << endl << endl;

    // Conversion de grados celsius a farenheit

    float gradosCelcius;

    cout << "Ingrese el numero de grados Celsius: ";
    cin >> gradosCelcius;

    float conversion = (gradosCelcius * 9/5) + 32;

    cout << "El resultado a grados Farenheit es: " << conversion << endl;

    return 0;
}