#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int posición;

	cout << "Ingrese la posicion del equipo en la tabla: " << endl;
	cin >> posición;

	if (posición <= 0)
	{
		cout << "La posicion ingresada es la incorrecta" << endl;
	}
	else if (posición > 0 && posición <= 4)
	{
		cout << "El equipo seleccionado ira al mundial !!!" << endl;
	}
	else if (posición == 5)
	{
		cout << "El equipo seleccionado ira a repechaje" << endl;
	}
	else if (posición > 5)
	{
		cout << "Comprate una TV LED para ver el mundial !!!" << endl;
	}

	_getch();
}