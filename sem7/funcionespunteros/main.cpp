#include <iostream>

using namespace std;

void priarray(int *arr, int size){
    cout << "[ ";
    for(int i=0;i < size ;i++,arr++ ){
        cout << *arr << " ";
    }
    cout << "]" << endl;

}
void interptr(int* a, int* b){
    int tmb = *a;
    *a = *b;
    *b = tmb;
}
/** implemente una funcion para invertir los elementos de un array con punteros
*/
void inte(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int inv(int* ini, int* fin){
    if (ini >= fin){
        return 0;
    }
    inte(ini,fin);
    return inv((ini+1),(fin-1));    // tambien sirve (++ini,--fin)
    }

void invr(int* ini , int* fin){
    while(ini <= fin){
        inte(ini,fin);
        ini++;
        fin--;
    }
}


int main()
{
    int arr[5]={1,2,3,4,5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    priarray(arr,tam);
    invr(arr,arr+4);
    priarray(arr,tam);

    int x = 10;
    int y = 20;
    interptr(&x, &y);
    cout << "a = " << x << endl;
    cout << "b = " << y << endl;
    cout << "--------------" << endl;return 0;
}
