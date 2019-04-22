#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int edad;
	cout << " Ingrese la edad de la persona: " << endl;
	cin >> edad;

	if (edad > 0)
	{
		if (edad >= 1 && edad < 18)
			cout << " El precio de la entrada es de 7 soles " << endl;
		else
		{
			if (edad >= 18 && edad <= 50)
			{
				cout << " El precio de la entrada es de 15 soles " << endl;
			}
			else 
				if (edad > 50)
				{
				cout << " El precio de la entrada es de 5 soles " << endl;
			    }
		}
		
	}
	else 
	    cout << " Lo siento, ingrese nuevamente la edad  " << endl;
	
	_getch();
}