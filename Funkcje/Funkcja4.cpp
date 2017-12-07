#include "stdafx.h"
#include <iostream>

using namespace std;


void Funkcja_4()
{
	int a = 0;
	long int rozmiar;
	long int suma = 0;

	cout << " Tutaj bede zliczal sume kwadratow liczb nieparzystych do ustalonej liczby przez Ciebie. " << endl
		<< " Podaj liczbe: ";

	cin >> rozmiar;

	int *tablica = new int[rozmiar];

	for (int i = 1; i <= rozmiar; i++, a++)
	{
		tablica[a] = i;
		if (i % 2 == 1)
		{
			int kwadrat;
			kwadrat = pow(tablica[a], 2);

			suma += kwadrat;

		}
	}

	delete[] tablica;

	cout << " Suma kwadratow liczb nieparzystych do liczby " << rozmiar << " wynosi " << suma << endl;
}