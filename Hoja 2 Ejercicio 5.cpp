#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int mes, a�o;
	cout << "Ingrese el mes de nacimiento: " << endl;
	cin >> mes;
	cout << "Ingrese el anio de nacimiento: " << endl;
	cin >> a�o;


	if (a�o > 0)
	{
		if (a�o % 4 == 0 && (a�o % 100 != 0 || a�o % 400 == 0))
		{
			switch (mes)
			{
			case 1:
			{
				cout << "Enero tiene 31 dias" << endl;
				break;
			}
			case 2:
			{
				cout << "Febrero tiene 29 dias" << endl;
				break;
			}
			case 3:
			{
				cout << "Marzo tiene 31 dias" << endl;
				break;
			}
			case 4:
			{
				cout << "Abril tiene 30 dias" << endl;
				break;
			}
			case 5:
			{
				cout << "Mayo tiene 31 dias" << endl;
				break;
			}
			case 6:
			{
				cout << "Junio tiene 30 dias" << endl;
				break;
			}
			case 7:
			{
				cout << "Julio tiene 31 dias" << endl;
				break;
			}
			case 8:
			{
				cout << "Agosto tiene 31 dias" << endl;
				break;
			}
			case 9:
			{
				cout << "Setiembre tiene 30 dias" << endl;
				break;
			}
			case 10:
			{
				cout << "Octubre tiene 31 dias" << endl;
				break;
			}
			case 11:
			{
				cout << "Noviembre tiene 30 dias" << endl;
				break;
			}
			case 12:
			{
				cout << "Diciembre tiene 31 dias" << endl;
				break;
			}
			default:
				cout << "El mes ingresado es incorrecto" << endl;
			}
		}
		else
		{
			switch (mes)
			{
			case 1:
			{
				cout << "Enero tiene 31 dias" << endl;
				break;
			}
			case 2:
			{
				cout << "Febrero tiene 28 dias" << endl;
				break;
			}
			case 3:
			{
				cout << "Marzo tiene 31 dias" << endl;
				break;
			}
			case 4:
			{
				cout << "Abril tiene 30 dias" << endl;
				break;
			}
			case 5:
			{
				cout << "Mayo tiene 31 dias" << endl;
				break;
			}
			case 6:
			{
				cout << "Junio tiene 30 dias" << endl;
				break;
			}
			case 7:
			{
				cout << "Julio tiene 31 dias" << endl;
				break;
			}
			case 8:
			{
				cout << "Agosto tiene 31 dias" << endl;
				break;
			}
			case 9:
			{
				cout << "Setiembre tiene 30 dias" << endl;
				break;
			}
			case 10:
			{
				cout << "Octubre tiene 31 dias" << endl;
				break;
			}
			case 11:
			{
				cout << "Noviembre tiene 30 dias" << endl;
				break;
			}
			case 12:
			{
				cout << "Diciembre tiene 31 dias" << endl;
				break;
			}
			default:
				cout << "El mes ingresado es incorrecto" << endl;
			}
		}
	}
	else
	{
		cout << "El anio ingresado es incorrecto" << endl;
	}


	_getch();
}