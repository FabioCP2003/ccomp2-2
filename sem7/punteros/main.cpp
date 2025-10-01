#include <iostream>

using namespace std;


    /**
    Punteros
    almacena direcciones de memoria de otra variable del mismo tipo


    *Operadores de direccion  "&"
    Sirve para obtener la direccion de memoria de una variable / objeto
    Operador unario. EJM = &var --> retorna la direccion de la variable var

    *Operadores de indireccion "*"
    Sirve para obtener el valor de una direccion de memoria.


    *DOS PUNTEROS PUEDEN APUNTAR A UNA MISMA VARIABLE



    */
int main() {
    int x = 10;
    int* p = &x;

    cout << "Valor de x: " << x << endl;
    cout << "Dirección de x: " << &x << endl;
    cout << "Valor de p: " << p+1 << endl;
    cout << "Valor al que apunta p: " << *p << endl;

    *p = 20;  // Cambia el valor de x a través del puntero

    cout << "Nuevo valor de x: " << x << endl;

    int* p1 = &x;
    cout<<p1<<"   "<<p<<endl;
    cout<<"---------------"<<endl;

    double d = 10;
    double* ptrd = &d;
    cout << "Valor de d: " << d << endl;
    cout << "Dirección de d: " << &d << endl;
    cout << "Valor de ptrd: " << ptrd << endl;
    cout << "Valor al que apunta ptrd: " << *ptrd << endl;



}
