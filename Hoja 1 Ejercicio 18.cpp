#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int posici�n;

	cout << "Ingrese la posicion del equipo en la tabla: " << endl;
	cin >> posici�n;

	if (posici�n <= 0)
	{
		cout << "La posicion ingresada es la incorrecta" << endl;
	}
	else if (posici�n > 0 && posici�n <= 4)
	{
		cout << "El equipo seleccionado ira al mundial !!!" << endl;
	}
	else if (posici�n == 5)
	{
		cout << "El equipo seleccionado ira a repechaje" << endl;
	}
	else if (posici�n > 5)
	{
		cout << "Comprate una TV LED para ver el mundial !!!" << endl;
	}

	_getch();
}