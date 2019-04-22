#include <iostream>
#include "conio.h"
using namespace std;

int main()
{
	int L1, L2, L3;
	cout << "Ingrese los lados de un triangulo ( A B C ): " << endl;
	cin >> L1 >> L2 >> L3;
	
	if (L1 > L2 && L1 > L3 && L2 < L1 && L2 > L3 && L3 < L1 && L3 < L2)
	{
		if (L1 <(L2 + L3) && L1>(L2 - L3) && L2<(L1 + L3) && L2>(L1 - L3) && L3<(L1 + L2) && L3>(L1 - L2))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (L1 > L2 && L1 > L3 && L2 < L1 && L2 < L3 && L3 < L1 && L3 > L2)
	{
		if (L1<(L2 + L3) && L1>(L3 - L2) && L2<(L1 + L3) && L2>(L1 - L3) && L3<(L1 + L2) && L3>(L1 - L2))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (L2 > L1 && L2 > L3 && L1 < L2 && L1 > L3 && L3 < L1 && L3 < L2)
	{
		if (L1<(L2 + L3) && L1>(L2 - L3) && L2<(L1 + L3) && L2>(L1 - L3) && L3<(L1 + L2) && L3>(L2 - L1))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (L2 > L1 && L2 > L3 && L1 < L2 && L1 < L3 && L3 > L1 && L3 < L2)
	{
		if (L1 <(L2 + L3) && L1 >(L2 - L3) && L2 <(L1 + L3) && L2 >(L3 - L1) && L3 <(L1 + L2) && L3 >(L2 - L1))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (L3 > L1 && L3 > L2 && L2 < L3 && L2 > L1 && L1 < L3 && L1 < L2)
	{
		if (L1 <(L2 + L3) && L1 >(L3 - L2) && L2 <(L1 + L3) && L2 >(L3 - L1) && L3 <(L1 + L2) && L3 >(L2 - L1))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	if (L3 > L1 && L3 > L2 && L2 < L3 && L2 < L1 && L1 < L3 && L1 > L2)
	{
		if (L1<(L2 + L3) && L1>(L3 - L2) && L2<(L1 + L3) && L2>(L3 - L1) && L3<(L1 + L2) && L3>(L1 - L2))
			cout << "SI ES UN TRIANGULO" << endl;
		else
			cout << "NO ES UN TRIANGULO" << endl;
	}
	_getch();
}