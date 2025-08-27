#include <iostream>

using namespace std;

int main()
{
    // para caracter se usancomillas simples
    //jugamos con los valores ASCII de los caracteres
    char car = '6';
    int val = static_cast<int>(car);
    cout << sizeof(car) << endl;

    int result = val - '0';
    cout << "El valor entero es: " << val << endl;
    cout << result << endl;
    return 0;
}
