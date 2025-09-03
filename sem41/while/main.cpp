#include <iostream>

using namespace std;

int main()
{
    /**
    * BUCLE WHILE
    *   while (condition) {
            instruc
            instruc
            instruc
            instruc
    *    }
    */

    int i = 1;
    while(i <= 10){
        cout << i << endl;
        i = i + 1;

    }
    cout << "---------------------------------------" << endl;
    i = 9;
    while(i >= 1){
        cout << i << endl;
        i = i - 1;

    }
    cout << "---------------------------------------" << endl;
    i = 3;
    while(i < 100){
        cout << i << endl;
        i = i + 3;

    }
    cout << "---------------------------------------" << endl;

    return 0;
}
