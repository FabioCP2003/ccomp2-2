#include <iostream>

using namespace std;
/**
    Punteros con arrays
    el nombre del arreglo es un puntero al primer elemento del arreglo


    ARITMETICA DE PUNTEROS:

    A los punteros se les puede incrementar o decrementar = ++ / --
*/

int main()
{
    int arr[5] = {1,2,3,4,5};

    cout << arr <<endl;
    cout << &arr[0] <<endl;
    cout << &arr[1] <<endl;
    cout << &arr[2] <<endl;
    cout << &arr[3] <<endl;
    cout << &arr[4] <<endl;

    int* ptr = arr;
    for(int i = 0; i < 5; i++ , ptr++){
        cout << *ptr << endl;
    }
    return 0;
}
