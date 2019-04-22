#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int codigo;
	double N1, N2, N3, promedio;
	char caritaFELIZ;

	cout << "Ingrese el codigo del alumno: " << endl;
	cin >> codigo;

	if (codigo > 0)
	{
		cout << "Ingrese las tres notas del alumno " << codigo << ": " << endl;
		cin >> N1 >> N2 >> N3;
		if (N1 >= 0 && N1 <= 20 && N2 >= 0 && N2 <= 20 && N3 >= 0 && N3 <= 20)
		{
			promedio = (0.3 * N1) + (0.3 * N2) + (0.4 * N3);
			caritaFELIZ = 1;
			if (promedio < 13)
			{
				cout << "El promedio del alumno " << codigo << " es de: " << promedio << endl;
				cout << "Estudie";
			}
			else if (promedio >= 13 && promedio < 15)
			{
				cout << "El promedio del alumno " << codigo << " es de: " << promedio << endl;
				cout << "Felicitaciones " << caritaFELIZ << endl;
			}
			else if (promedio >= 15 && promedio < 20)
			{
				cout << "El promedio del alumno " << codigo << " es de: " << promedio << endl;
				cout << "Felicitaciones " << caritaFELIZ << " " << caritaFELIZ << endl;
			}
			else if (promedio == 20)
			{
				cout << "El promedio del alumno " << codigo << " es de: " << promedio << endl;
				cout << "Felicitaciones " << caritaFELIZ << " " << caritaFELIZ << " " << caritaFELIZ << " " << caritaFELIZ << " " << caritaFELIZ << endl;
			}
		}
		else
		{
			cout << "Las notas ingresadas son las incorrectas" << endl;
		}
	}
	
	_getch();
}