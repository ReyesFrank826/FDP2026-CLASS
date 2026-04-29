#include <iostream>

using namespace std;

int main()
{

    float peso = 0;
    int cobro = 0;
    int billetera = 500;

    cout << endl
        << endl
        << "Billetera: $" << billetera << endl
        << endl;
    cout << "Cual es el peso del parquete?" << endl;
    cin >> peso;

    if (peso > 0 && peso <= 5)
    {
        cobro = billetera - 5;
        cout << "Se te a cobrado $5" << endl;
        cout << "Saldo actual: $" << cobro << endl;
    }
    else if (peso >= 6 && peso <= 10)
    {
        cobro = billetera - 10;
        cout << "Se te a cobrado $10" << endl;
        cout << "Saldo actual: $" << cobro << endl;
    }
    else if (peso > 10)
    {
        cobro = billetera - 15;
        cout << "Se te a cobrado $15" << endl;
        cout << "Saldo actual: $" << cobro << endl;
    }
    else
    {
        cout << "Ingrese Datos validos" << endl;
    };

    return 0;
}

//me falta el flujograma