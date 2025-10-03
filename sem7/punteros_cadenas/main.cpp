#include <iostream>

using namespace std;

int contar(char* ptr, int car){
    int a = 0;
    while(*ptr != '/0' ){ // "/" al reves
        if(*ptr == car)
            ptr++;
    }
}

int main()
{
    char cad[] = "Ciencia de la computacion";
    cout << contar(cad,'e');
}
