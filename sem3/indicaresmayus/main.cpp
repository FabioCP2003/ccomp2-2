#include <iostream>

using namespace std;

int main()
{
    char val ;
    cin >> val;
    int num = static_cast<int>(val);
    if(num > 64 && num < 91) {
        cout << "El caracter es una letra mayuscula" << endl;
    } else {
        cout << "No es una letra mayuscula" << endl;
    }
    if(num > 96 && num < 123) {
        cout << "El caracter es una letra minuscula" << endl;
    }
    return 0;
}
