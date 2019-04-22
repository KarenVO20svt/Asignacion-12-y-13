#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	double nota;
	cout << "Ingrese nota del alumno: " << endl;
	cin >> nota;
	if (nota > 0 && nota < 20)
	{
		if (nota < 12.50)
			cout << "Desaprobado" << endl;

		else
		{
			if (nota > 12.50 && nota < 20)
				cout << "Aprobado" << endl;
		}
	}
	else
		cout << "Lo siento, ingrese nuevamente la nota" << endl;

	_getch();
}