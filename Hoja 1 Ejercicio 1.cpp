#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int N;
	cout << "Ingrese numero: " << endl;
	cin >> N;
	if ((N % 2) == 0)
		cout << "El numero es par" << endl;
	else
		cout << "El numero es impar" << endl;

	_getch();
}