#include <iostream>
#include <cmath>

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
    //Para saber el numero de digitos
    int n{0};
    cin >> n;
    int numC = n;
    int numD = 0;
    while (numC > 0){
        numC /= 10;
        numD++;
    }

    while(numD > 0){
        int ini = n /pow(10, numD - 1);
        int fin = n % 10;
        cout << ini <<"  "<<fin<<endl;
        if(ini == fin){
            cout << "si"<<endl;
        } else {
            cout << "No es palindromo";
            break;
            }
        n = n - ini*(pow(10,numD - 1)) ; //1221
        cout << "val :"<< n << endl;
        numD = numD - 2;

    }
    return 0;
}
