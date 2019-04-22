#include<iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int edad, P;
	char sexo;

	cout << "Ingrese el sexo de la persona (F o M): " << endl;
	cin >> sexo;
	cout << "Ingrese la edad de la persona: " << endl;
	cin >> edad;

	if (sexo == 'F')
	{
		P = ((220 - edad) / 10);
		cout << "El numero debe ser de " << P << " pulsaciones por cada 10 segundos aproximadamente." << endl;
	}
	else {
		if (sexo == 'M')
		{
			P = (210 - edad) / 10;
			cout << "El numero debe ser de " << P << " pulsaciones por cada 10 segundos aproximadamente." << endl;
		}
	}

	_getch();
}