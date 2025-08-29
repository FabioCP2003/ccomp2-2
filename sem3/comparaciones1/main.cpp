#include<iostream>

using namespace std;

int main ()
{
	/* OPERADORES LOGICOS
		&& - and
		|| - or        alt+124
        ! - negacion
        EJM a = 10 , b = 5
            (a < 5) -> true
            (a < 5) -> true
            (a < 5) -> true
            (a < 5) -> true
            (a < 5) -> true
            foto 29/08/2025
	*/

	int a = 1;
	int b = 6;

	if(a > 5 || b < 5) {
		cout << "El numero " << a << " es mayor que 5" << endl;
	}
	return 0;
}

