#include<iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int NCom;
	double precio1, descuento, precioFi;
	cout << "Ingrese el numero de computadoras a comprar: " << endl;
	cin >> NCom;
	if (NCom > 0)
	{
		if (NCom > 0 && NCom < 5)
		{
			precio1 = NCom * 760;
			descuento = precio1 * 0.1;
			precioFi = precio1 - descuento;
			cout << "El costo es de $" << precio1 << " y el total aplicando el descuento de $" << descuento << " es de $" << precioFi << endl;
		}
		else if (NCom >= 5 && NCom < 10)
		{
			precio1 = NCom * 760;
			descuento = precio1 * 0.2;
			precioFi = precio1 - descuento;
			cout << "El costo es de $" << precio1 << " y el total aplicando el descuento de $" << descuento << " es de $" << precioFi << endl;
		}
		else if (NCom >= 10)
		{
			precio1 = NCom * 760;
			descuento = precio1 * 0.4;
			precioFi = precio1 - descuento;
			cout << "El costo es de $" << precio1 << " y el total aplicando el descuento de $" << descuento << " es de $" << precioFi << endl;
		}
	}
	else
	{
		cout << "El numero de computadoras debe ser mayor a 0" << endl;
	}

	_getch();
}