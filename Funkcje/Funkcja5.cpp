#include "stdafx.h"
#include <iostream>

using namespace std;

void wyswietlanie(int tab[])
{
	cout << " Twoje dodane wielomiany wygladaja tak: " << endl;
	for (int a = 0, i = 5 ; a < 6 && i >= 0 ; a++, i--)
	{
		
			cout << tab[a] << "x^" << i << " \t ";
	}
}
int *Dod_wielo(int tab[], int tab1[])
{
	
	int wielomian3[6];

	for (int i = 0; i <= 5; i++)
	{
		int suma[6] = { 0 };
		suma[i] = tab[i] + tab1[i];

		//cout << suma[i] << endl;
		wielomian3[i] = suma[i];
		//cout << wielomian3[i] << '\t';
		
		
		
	}
	return wielomian3;
}
void Funkcja_5()
{
	int wsp;

	cout << " Podaj wspolczynniki pierwszego wielomianu" << endl;

	int wielomian[6];
	int wielomian2[6];
	int wielomian3[6];


		///	WYPELNIENIE PIERWSZEGO WIELOMIANU
	
	for (int i = 5, a = 0; i >= 0 && a < 6; i--,a++)
	{
		cin >> wsp;
		
		wielomian[a] = wsp;
		
	}
	
		/// WYPELNIENIE DRUGIEGO WIELOMIANU
	cout << " Podaj wspolczynniki drugiego wielomianu" << endl;

	for (int i = 5, a = 0; i >= 0 && a < 6; i--, a++)
	{
		cin >> wsp;
		
		wielomian2[a] = wsp;
		
	}
	


	
		///WYPELNIENIE TRZECIEGO WIELOMIANU
	for (int i = 0; i < 6; i++)
	{
		
		wielomian3[i] = Dod_wielo(wielomian,wielomian2)[i];
		
	}
	
		///WYSWIETLANIE WYPELNIONEGO WIELOMIANU
	wyswietlanie(wielomian3);
}