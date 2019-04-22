#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int N, C1, C2, C3;
	cout << "Ingrese el numero entero: " << endl;
	cin >> N;

	if (N >= 100 && N <= 999)
	{
		C1 = N / 100;
		N = N % 100;
		C2 = N / 10;
		N = N % 10;
		C3 = N;
		if (C1 == C3)
		{
			cout << "Es numero capicua" << endl;
		}
		else
		{
			cout << "No es numero capicua" << endl;
		}
	}
	else
	{
		cout << "Numero incorrecto" << endl;
	}

	_getch();
}