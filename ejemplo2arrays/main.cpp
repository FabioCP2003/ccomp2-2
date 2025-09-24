#include <iostream>

using namespace std;

/**
* implementar una funcion q invierte la posicion del arreglo
*/
void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void inv(int arr[], int tam){
    for(int i = 0; i < tam/2; i++){
        int a = arr[i];
        arr[i] = arr[tam-(i+1)];
        arr[tam-(i+1)] = a;
    }
}

void invertir(int arr[],int tam){
    for(int i = 0, j = tam-1 ; i < j ; i++, j--){
        intercambio(arr[i],arr[j]);
    }

}
void invertR(int arr[],int tam,int b = 0){
    if(tam/2 < b+1){
        return;
    }else{
        int a = arr[b];
        arr[b] = arr[tam-(b+1)];
        arr[tam-(b+1)] = a;
        invertR(arr,tam,b+1);
        }
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
    invertir(numeros,tma);
    cout<<"------------"<<endl;
    cout << numeros[0] << endl;
    cout << numeros[1] << endl;
    cout << numeros[2] << endl;
    cout << numeros[3] << endl;
    cout << numeros[4] << endl;

    return 0;
}
