#include <iostream>

using namespace std;
int pot(int base, int exp){
    int result = 1;
    int bas = base;
    for(int i = 1 ; i < exp ; i++){
        base = base * bas;
    }
    result = base;
    return result;
}
int main()
{
    int a{0};
    int b{0};
    cin >> a;
    cin >> b;
    cout << pot(a , b);
    return 0;
}
