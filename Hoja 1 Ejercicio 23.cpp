#include<iostream>
#include "conio.h"
using namespace std;

int main() 
{
	double H, pago;
	cout << "Ingrese el total de horas trabajadas por el obrero: " << endl;
	cin >> H;
	if (H > 0)
	{
		if (H > 0 && H <= 40)
		{
			pago = H * 16;
			cout << "El salario semanal del obrero es de $" << pago << endl;
		}
		else if (H > 40)
		{
			pago = (40 * 16) + (H - 40) * 20;
			cout << "El salario semanal del obrero es de $" << pago << endl;
		}
	}
	else
	{
		cout << "Debe trabajar mas de 0 horas" << endl;
	}

	_getch();
}