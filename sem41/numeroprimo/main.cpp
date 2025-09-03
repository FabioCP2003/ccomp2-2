#include <iostream>

using namespace std;

int main()
{
    /**
    * implemente un programa que solicite un numero por teclado
    * e indique si dicho numero es un numero primo
    */

    int num ;
    cout << "Ingrese un numero: ";
    cin >> num;
    int i = 2;    //17
    if (num == 1 || num == 2 || num == 3 || num == 5 || num == 7 ){
        cout << "Es numero primo" << endl;
        goto final;
    }
    while(i < 10){
        if((num % i) == 0){
            cout << "No es numero primo"<< endl;
            break;
        }
        else {
            i = i + 1;
        }
    }
    if (i == 10){
        cout << " El numero es primo!!";
    }
    final:
    return 0;
}
