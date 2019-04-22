#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	double Ambrosoli, TicTac, Donofrio, AC, TC, DC, MontoT, MontoP;

	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 1: " << endl;
	cin >> Ambrosoli;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 2: " << endl;
	cin >> TicTac;
	cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 3: " << endl;
	cin >> Donofrio;
	cout << "Ingrese el Monto de la Propina: " << endl;
	cin >> MontoP;

	AC = Ambrosoli * 0.75;
	TC = TicTac * 1.15;
	DC = Donofrio * 0.65;
	MontoT = AC + TC + DC;

	cout << "El monto total de la compra es: " << MontoT << endl;

	if (MontoP > MontoT)
		cout << "LA PROPINA FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;
	else
		cout << "LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;

	_getch();
}