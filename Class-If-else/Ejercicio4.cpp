#include <iostream>
using namespace std;

int main(){
    
    float water;
    cout << "Bienvenido, quieres saber que tal esta la temperatura de tu agua?" << endl << endl;
    cout << "Ingrese los grados celcius de su agua: " << endl;
    cin >> water;

    if(water<=25){
    cout << "el agua esta fria" << endl;

    }
    else if (water >=26 && water <= 45){
    cout << "el agua esta templada" << endl;
    }else {
    cout << "el agua esta caliente" << endl;
    }
    
    return 0;
}