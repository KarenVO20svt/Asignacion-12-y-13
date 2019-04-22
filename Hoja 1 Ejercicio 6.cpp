#include<iostream>
#include "conio.h"
using namespace std;
int main()
{
	double valorA, valorB, valorC, valorX, D, R1, R2, resultado;

	cout << "Ingrese el valor de A: " << endl;
	cin >> valorA;
	cout << "Ingrese el valor de B: " << endl;
	cin >> valorB;
	cout << "Ingrese el valor de C: " << endl;
	cin >> valorC;
	cout << "Ingrese un valor para evaluar: " << endl;
	cin >> valorX;

	D = (valorB * valorB) - (4 * valorA * valorC);

	if (D > 0) {
		R1 = (-valorB + sqrt(D)) / (2 * valorA);
		R2 = (-valorB - sqrt(D)) / (2 * valorA);

		resultado = valorA * valorX * valorX + valorB * valorX + valorC;

		cout << "Raiz 1: " << R1 << endl;
		cout << "Raiz 2: " << R2 << endl;
		
		cout << valorA << "(" << valorX << ")" << "^2 + " << valorB << "(" << valorX << ") + " << valorC << " = " << resultado << endl;
	}

	else
		cout << "El discriminante debe ser mayor a 0" << endl;

	_getch();
}

