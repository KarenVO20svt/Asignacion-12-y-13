#include<iostream>
#include "conio.h"
using namespace std;

int main() 
{
	double dia, precioF;
	int I;
	cout << "Ingrese el diametro en centimetros: " << endl;
	cin >> dia;
	cout << "Ingrese el numero de ingredientes extras: " << endl;
	cin >> I;
	if (dia > 0)
	{
		if (dia > 0 && I >= 0)
		{
			if (dia > 0 && I == 0)
			{
				precioF = dia * 1.5;
				cout << "El precio total de la pizza es de S/" << precioF << endl;
			}
			else if (dia > 0 && I > 0)
			{
				precioF = dia * 1.5 + I * 2.5;
				cout << "El precio total de la pizza es de S/" << precioF << endl;
			}
		}
		else
		{
			cout << "El numero de ingredientes ingresado es el incorrecto" << endl;
		}
	}
	else
	{
		cout << "El diametro en centimetros debe ser mayor a 0" << endl;
	}

	_getch();
}