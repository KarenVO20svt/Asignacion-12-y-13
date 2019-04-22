#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int N;
	cout << "Ingrese el numero" << endl;
	cin >> N;
	if (N >= 1 && N <= 100)
	{
		if (N / 100 > 0)
		{
			cout << "El numero tiene 3 digitos" << endl;
		}
		else if (N / 10 > 0)
		{
			cout << "El numero tiene 2 digitos" << endl;
		}
		else if (N / 1 > 0)
		{
			cout << "El numero tiene 1 digito" << endl;
		}
	}
	else
	{
		cout << "Numero incorrecto" << endl;
	}

	_getch();
}