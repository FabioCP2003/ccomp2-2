#include <iostream>

using namespace std;

int main()
{
    char car = 'A';
    int val = static_cast<int>(car);
    cout << sizeof(car) << endl;
    cout << "El valor entero es: " << val << endl;
    return 0;
}
