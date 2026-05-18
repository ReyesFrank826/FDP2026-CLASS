#include <iostream>

using namespace std;

int main(){

    int n=0, a, i;

    cout<<"podrias ingresar un numero que sera tu limite? ";
    cin >> a;

    for (int i=1; i <=a; i++){

        //imprimir el valor actual del i
        cout << i << " ";
    }

    cout <<endl;
    return 0;
}