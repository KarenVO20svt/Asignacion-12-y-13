#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int faltas;
	double nota;

	cout << "Ingrese el promedio ponderado: " << endl;
	cin >> nota;
	cout << "Ingrese la cantidad de faltas: " << endl;
	cin >> faltas;

	if ( nota >= 15 && faltas == 0)
	{
		cout << "Se le puede otorgar la beca" << endl;
	}
	else
		cout << "No se le puede otorgar la beca" << endl;

	_getch();
}