#include <iostream>

using namespace std;

long sumar(int arr[], int tam){
    int sum = 0;
    for(int i = 0; i < tam; sum += arr[i++] ){
        ;
    }
    return sum;
}

long sumaR(int arr[], int tam){
    if (tam == 0)
        return 0;
    else
        return arr[tam - 1]+ sumaR(arr, tam - 1);

}

int main()
{
    int tma = 5;
    int numeros[5] = {2,5,13,14,9};
    cout << numeros[0] << endl;
    cout << numeros[1] << endl;
    cout << numeros[2] << endl;
    cout << numeros[3] << endl;
    cout << numeros[4] << endl;

    cout << "La suma es: "<< sumaR(numeros,tma)<< endl;
    cout << "La suma es: "<< sumar(numeros,tma)<< endl;

    return 0;
}
