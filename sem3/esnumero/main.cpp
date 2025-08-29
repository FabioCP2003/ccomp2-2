#include <iostream>

using namespace std;

int main()
{
    char val ;
    cin >> val;
    int num = static_cast<int>(val);
    if(num > 47 && num < 58) {
        cout << "ES UN NUMERO" << endl;
    } else {
        cout << "NO ES UN NUMERO" << endl;
    }

    return 0;
}
