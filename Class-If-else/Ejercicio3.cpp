#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    //verifica si el numero es igual a 0
    if(n==0){
    cout << "este numero es 0" << endl;

    }
    //verifica si es negativo
    else if (n<0){
    cout << "este numero es negativo" << endl;

    }else {
    cout << "este numero es positivo" << endl;
    }
    
    return 0;
}