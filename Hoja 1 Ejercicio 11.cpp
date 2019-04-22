#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int GBs;
	double costo;
	cout << "Ingrese los GB consumidos: " << endl;
	cin >> GBs;

	if (GBs > 0) {
		if (GBs > 0 && GBs <= 4)
		{
			costo = 50;
			cout << "El costo por mes es de " << costo << " soles " << endl;
		}
		else if (GBs > 4 && GBs <= 8)
		{
			costo = 85;
			cout << "El costo por mes es de " << costo << " soles " << endl;
		}
		else if (GBs > 8)
		{
			costo = 85 + ((GBs - 8)*4.50);
			cout << "El costo por mes es de " << costo << " soles " << endl;
		}

	}

	else
		cout << "El consumo de GB debe ser mayor a 0" << endl;

	_getch();
}