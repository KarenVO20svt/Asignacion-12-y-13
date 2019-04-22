#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	double PElefant, PDinosaurio;
	cout << "Ingrese peso del elefante: " << endl;
	cin >> PElefant;
	cout << "Ingrese peso del dinosaurio: " << endl;
	cin >> PDinosaurio;

	if (PElefant > PDinosaurio)
		cout << "El elefante pesa mas que el dinosaurio" << endl;
	else
		cout << "El dinosaurio pesa mas que el elefante" << endl;

	_getch();
}