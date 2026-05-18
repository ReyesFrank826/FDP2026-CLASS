#include <iostream>

using namespace std;

int main(){

    int n, suma=0;

    cout<<"Ingrese un numero entero: ";
    cin >> n;

    //ciclo para sumar los numeros desde 1 hasta n
    for(int i=1; i<=n; i++){
        suma +=i; //es lo mismo pero expresado diferente lol
        int suma1 = suma1+i;

        cout<<suma<<endl<<endl;
        cout<<suma1<<endl;
    } 

    cout<<"la suma de todos los numeros hasta " <<n << " es: "<<suma<<endl;

    return 0;
}