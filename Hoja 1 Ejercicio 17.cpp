#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	double x, y;
	cout << "Ingrese las coordenadas X e Y de un Punto: " << endl;
	cin >> x >> y;

	if (x == 0 && y == 0)
	{
		cout << "El punto esta en el origen de coordenadas" << endl;
	}
	else if (x > 0 && y > 0)
	{
		cout << "El punto se encuentra en el PRIMER CUADRANTE" << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "El punto se encuentra en el SEGUNDO CUADRANTE" << endl;
	}
	else if (x < 0 && y < 0)
	{
		cout << "El punto se encuentra en el TERCER CUADRANTE" << endl;
	}
	else if (x > 0 && y < 0)
	{
		cout << "El punto se encuentra en el CUARTO CUADRANTE" << endl;
	}

	_getch();
}