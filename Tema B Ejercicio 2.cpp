#include <iostream>
#include "conio.h"
using namespace std;

int main ()
{
	//Entrada
	int Nventas, SBase = 900;
	double sueldo, sueldoF;
	char codeT;
	cout << "Ingrese las ventas del colaborador: " << endl;
	cin >> Nventas;
	cout << "Ingrese el codigo de la tienda: " << endl;
	cin >> codeT;
	codeT = toupper(codeT);

	//Lógica
	sueldo = (Nventas == 0) * SBase + (Nventas > 0 && Nventas <= 5 ) * SBase * 1.10 + (Nventas > 5 && Nventas <= 10) * SBase * 1.15 + (Nventas > 10) * SBase * 1.25;
	sueldoF = (codeT == 'M')* sueldo * 1.02 + (codeT == 'S')* sueldo * 1.05 + (codeT == 'L')* sueldo * 1.10 + (codeT == 'A')* sueldo * 1.15;

	//Salida
	cout << "El sueldo correspondiente es: " << sueldoF << endl;

	_getch();
}