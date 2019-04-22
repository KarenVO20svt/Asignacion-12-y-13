#include<iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int zona, consumo, F1, F2;
	double pago;
	cout << "Ingrese zona (1-2): " << endl;
	cin >> zona;
	cout << "Ingrese consumo: " << endl;
	cin >> consumo;

	F1 = 50;
	F2 = 25;

	if (zona == 1 || zona == 2)
	{
		if (consumo >= 0)
		{
			if (zona == 1)
			{
				if (consumo == 0)
				{
					pago = F1;
					cout << "El monto a pagar es: " << pago << endl;
				}
				else if (consumo > 0 && consumo <= 100)
				{
					pago = F1 + (0.75*consumo);
					cout << "El monto a pagar es: " << pago << endl;
				}
				else if (consumo > 100)
				{
					pago = F1 + (0.75 * 100) + (consumo - 100)*0.9;
					cout << "El monto a pagar es: " << pago << endl;
				}
			}
			else if (zona == 2)
			{
				if (consumo == 0)
				{
					pago = F2;
					cout << "El monto a pagar es: " << pago << endl;
				}
				else if (consumo > 0 && consumo <= 100)
				{
					pago = F2 + (0.3*consumo);
					cout << "El monto a pagar es: " << pago << endl;
				}
				else if (consumo > 100)
				{
					pago = F2 + (0.3 * 100) + (consumo - 100)*0.7;
					cout << "El monto a pagar es: " << pago << endl;
				}
			}
		}
		else
		{
			cout << "El consumo debe ser 0 o mayor de 0" << endl;
		}
	}
	else
	{
		cout << "La zona ingresada es incorrecta" << endl;
	}

	_getch();
}