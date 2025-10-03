#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;
    for(int i = 0; i < 5; i++,ptr++){
        cout << *ptr <<" ";
    }
    cout << endl;

    cout << *(arr+0) << endl;
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *(arr+4) << endl;

    int* ptr2 = arr+4;
    for(int i = 0 ; i < 5; i++, ptr2--){
        cout << *ptr2 << " ";
    }
    cout << endl;

    cout << "----------Usando while----------" << endl;

    int* ptr3 = arr;

    while(ptr3 < (arr+5)){
        cout << *ptr3 <<" ";
        ptr3++;
    }
    cout << endl;
    int* ptr4 = arr+4;
    while(ptr4 >= arr){
        cout << *ptr4 << " " << endl;
        cout << "Direcciones;" <<endl;
        cout << ptr4 <<" ";
        cout << arr <<" ";
        ptr4--;
    }

    return 0;
}
