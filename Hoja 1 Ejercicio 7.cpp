#include<iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int Pnumero, Snumero;
	cout << "Ingrese dos numeros enteros (N1 N2): " << endl;
	cin >> Pnumero >> Snumero;

	if (Pnumero % Snumero == 0)
		cout << Pnumero << " es multiplo de " << Snumero << endl;
	else
		cout << Pnumero << " no es multiplo de " << Snumero << endl;

	_getch();
}
