#include <iostream>

using namespace std;

int main()
{
    /**
    Los tipos de datos para manejar ENTEROS son:
    - short (ocupa 2 bytes de la RAM)
    - int - long (ocupa 4 bytes de la RAM)
    - long long (ocupa 8 bytes de la RAM)
    - con "unsigned" el tipo de dato puede tomar todo su valor maximo, sin negativos
    */
    unsigned short val = 65534; //32767
    cout << "el valor es " << val << endl;
    val = val + 1;
    cout << "el valor es " << val << endl;
    val = val + 1;
    cout << "el valor es " << val << endl;
    /**
        SHORT
            2bytes
        1 byte - 8 bits
        1 bytes - 16 bits
        2 en binario es -> 010
        3 en binario es -> 011
        4 en binario es -> 100
        ...
        10 en binario es -> 1010
        ...
        255 en binario es -> 11111111
        256 en binario es -> 00000001 00000000
        ...
        65535 en binario es -> 11111111 11111111
        */
    return 0;
}
