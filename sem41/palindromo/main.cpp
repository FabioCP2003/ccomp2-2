#include <iostream>

using namespace std;

int main()
{
    /**
    * Escribir un program que pida un numero de 3 a 9 digitos
    * y evalue mi dicho numero es un palindromo.
    *
    * 121 / 12321 / 1234321 / 123454321
    * 1221  / 123321 /12344321

    */

    int n;
    cin >> n ;
    int c = sizeof(n);
    int d = c % 2 ;
    int f = 0;
    if (d == 0){
        while(f < c/2){
        cout << "\nEl numero ingresado es: " << n << endl;
        cout << n / 1000 << endl;
        cout << (n % 1000) / 100 << endl;
        cout << (n % 100) / 10 << endl;
        cout << n % 10 << endl;
        }


    }

    return 0;
}
