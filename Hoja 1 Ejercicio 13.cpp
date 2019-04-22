#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int N, N1, N2, N3;
	cout << "Ingrese el numero: " << endl;
	cin >> N;
	if (N >= 100 && N <= 999)
	{
		N1 = N / 100;
		N = N % 100;
		N2 = N / 10;
		N = N % 10;
		N3 = N;
		cout << "El numero al reves es: " << N3 << N2 << N1 << endl;
	}

	else
		cout << "Numero incorrecto" << endl;

	_getch();
}