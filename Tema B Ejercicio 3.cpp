#include<iostream>
#include "conio.h"
using namespace std;

int main()
{
	//Entrada
	char vista, d�a;
	double precio, incremento;
	int Ncamas;
	cout << "Ingrese la vista (M:Mar, I:Interior): " << endl;
	cin >> vista;
	cout << "Dia de ingreso (L:lunes-jueves; V:viernes o sabado; D:domingo): " << endl;
	cin >> d�a;
	cout << "Camas: " << endl;
	cin >> Ncamas;
	d�a = toupper(d�a);
	vista = toupper(vista);

	//L�gica
	precio = (vista == 'M')*((d�a == 'L')*20.4 + (d�a == 'V')*80.8 + (d�a == 'D')*70.1)
		+ (vista == 'I') * ((d�a == 'L')*15.7 + (d�a == 'V')*60.7 + (d�a == 'D')*65.8);
	incremento = (Ncamas == 1)*precio + (Ncamas == 2 || Ncamas == 3)*precio*1.12 + (Ncamas > 3)*precio*1.25;

	//Salida
	cout << "Precio del ticket: " << incremento << endl;

	_getch();
}