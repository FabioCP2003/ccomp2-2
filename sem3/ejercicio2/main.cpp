#include <iostream>

using namespace std;

int main()
{
    /** un programa q reciba un numero de 4 digitos y que lo imprima de forma vertical
    */
    int val;
    cout << "INGRESE UN NUMERO DE 4 DIGITOS: " <<endl;
    cin >> val;
    if(val < 10000 && val > 999){
    int a = val / 1000;
    int b = (val-(a*1000)) / 100;
    int c = ((val-(a*1000))-(b*100))/ 10;
    int d = (((val-(a*1000))-(b*100)) - (c*10));
    cout << a << endl << b << endl << c << endl << d << endl ;
    } else {
        cout << "No es un numero de 4 digitos" << endl;
    }
    return 0;
}
