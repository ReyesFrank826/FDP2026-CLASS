#include <iostream>
using namespace std;

int main(){

    for(int i=1; i<=5; i++){
        
        //cada linea se imprime "i" asteriscos
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl; //salto de linea despues de cada asterisco
    } 

    return 0;
}