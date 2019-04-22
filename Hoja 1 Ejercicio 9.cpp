#include <iostream>
#include "conio.h"
using namespace std;

int main() 
{
	int GL, GV;

	cout << "Ingrese la cantidad de goles del equipo local: " << endl;
	cin >> GL;
	cout << "Ingrese la cantidad de goles del equipo visitante: " << endl;
	cin >> GV;

	if (GL >= 0 && GV >= 0)
	{
		if (GL > GV)
			cout << "Gano el equipo local" << endl;
		else {
			if (GL < GV)
				cout << "Gano el equipo visitante" << endl;
			else
			{
				if (GL == GV)
					cout << "Empate" << endl;
			}
		}
	}
	else
	{
		cout << "Lo siento, ingrese nuevamente los goles" << endl;
	}


	_getch();

}