#include <iostream>

using namespace std;

int main(){

    int grade =1;
    cout <<"\nEnter your grade (0 to 100)" <<endl;
    cin >> grade;

    int gradeRange = grade / 10;

    switch(gradeRange){
        case 10:
        cout <<endl<<"Perfect score!" <<endl;
        break;

        case 9:
        if(grade >= 90 && grade <100){
            cout <<endl<< "Excelent!" <<endl;
        }
        break;

        case 8:
        if(grade >= 80 && grade <90){
            cout <<endl<< "Good!" <<endl;
        }
        break;

        case 7:
        if(grade >= 70 && grade <80){
            cout <<endl<< "Nice" <<endl;
        }
        break;

        case 6:
        if(grade >= 60 && grade <70){
            cout <<endl<< "Regular" <<endl;
        }
        break;

        case 5:
        if(grade >= 50 && grade <60){
            cout <<endl<< "Deficient" <<endl;
        }
        break;

        case 4:
        if(grade >= 0 && grade <50){
            cout <<endl<< "Failed" <<endl;
        } //esto esta mal, deberia de ponerle hasta el caso 0 para que este bien
        break;

        default:
        cout <<"\nDatos incorrectos";
        break;
    }

    return 0;
}