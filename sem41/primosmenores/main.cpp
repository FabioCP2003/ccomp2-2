#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 1;
    int d = 0 ;
    cin >> n;
    while(n >= 1){
        d = 0;
        while (i<=n){
            if (n%i == 0){
                d++;
            }
            i++;
    }
    if (d == 2){
        cout << n;
    }
    n = n - 1;
    }
    return 0;
}
