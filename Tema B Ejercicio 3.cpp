#include<iostream>
#include "conio.h"
using namespace std;

int main()
{
	//Entrada
	char vista, día;
	double precio, incremento;
	int Ncamas;
	cout << "Ingrese la vista (M:Mar, I:Interior): " << endl;
	cin >> vista;
	cout << "Dia de ingreso (L:lunes-jueves; V:viernes o sabado; D:domingo): " << endl;
	cin >> día;
	cout << "Camas: " << endl;
	cin >> Ncamas;
	día = toupper(día);
	vista = toupper(vista);

	//Lógica
	precio = (vista == 'M')*((día == 'L')*20.4 + (día == 'V')*80.8 + (día == 'D')*70.1)
		+ (vista == 'I') * ((día == 'L')*15.7 + (día == 'V')*60.7 + (día == 'D')*65.8);
	incremento = (Ncamas == 1)*precio + (Ncamas == 2 || Ncamas == 3)*precio*1.12 + (Ncamas > 3)*precio*1.25;

	//Salida
	cout << "Precio del ticket: " << incremento << endl;

	_getch();
}