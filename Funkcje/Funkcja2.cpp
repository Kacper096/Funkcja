#include "stdafx.h"
#include <iostream>

using namespace std;

void Funkcja_2()
{
	int cyfra = 0, liczba, n;

	cout << " Podaj liczbe a podam Ci ile ma cyfr: ";
		cin >> n;

	liczba = n;

	if (liczba == 0)
		cyfra = 1;
	else 
		while (liczba > 0)
		{
			cyfra++;
			liczba /= 10;
		}

	if (cyfra == 1)
		cout << " Liczba posiada jedna cyfre " << endl << endl;
	else
		cout << " Liczba " << n << " posiada " << cyfra << " cyfr(y)" << endl << endl;

	//system("pause");
}