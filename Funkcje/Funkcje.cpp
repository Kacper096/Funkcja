// Funkcje.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Nr.h"
#include <iostream>


using namespace std;


void main()
{
	int wybor;
	string Koniec = "koniec";

	for (int i = 1; i < 4; i++)
	{
		cout << " Zadanie Nr. " << i << endl;
	}

	cout << " Wpisz koniec jesli chcesz zakonczyc program" << endl;
	
	do

	{
		cout << endl << " Wybierz swoje zadanie z funkcji: ";
		cin >> wybor;

		switch (wybor)
		{
		case 1: Funkcja_1(); 		break;
		case 2: Funkcja_2();		break;
		case 3: Funkcja_3();		break;
		}
	} while (Koniec != "koniec");
	cout << endl << " Dziekuje koniec programu " << endl;

	system("pause");
}

