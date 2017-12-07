#include "stdafx.h"
#include <iostream>

using namespace std;

bool Czy_Przestepny(int c)
{
	if ((c % 400 == 0 || (c % 100 != 0 && c % 4 == 0)) == 1)
	{
		return true;
	}
	else return false;
}
int sprawdzenie(int a, int b, int c, bool przestepny)
{
	if (((b % 2 == 1) && b > 0 && b <= 7) || ((b % 2 == 0) && b >= 8 && b <= 12 && b != 2))
	{
		return	(a > 0 && a <= 31);
	}
	else if (((b % 2 == 0) && b > 0 && b < 7 && b != 2) || ((b % 2 == 1) && b > 8 && b < 12))
		return (a > 0 && a <= 30);
	else if (przestepny == false && b == 2)
		return (a > 0 && a <= 28);
	else if (przestepny == true && b == 2)
		return (a > 0 && a <= 29);
}
int obliczanie(int a, int b, int c, bool przestepny)
{
	int wynik;

	if (przestepny == true)
	{
		switch (b)
		{
		case 1:	wynik = a;				break;
		case 2:	wynik = a + 31;			break;
		case 3:	wynik = a + 60;			break;
		case 4:	wynik = a + 91;			break;
		case 5:	wynik = a + 121;		break;
		case 6:	wynik = a + 152;		break;
		case 7:	wynik = a + 182;		break;
		case 8:	wynik = a + 213;		break;
		case 9:	wynik = a + 244;		break;
		case 10:wynik = a + 274;		break;
		case 11:wynik = a + 305;		break;
		case 12:wynik = a + 335;		break;
		}


	}
	else
	{
		switch (b)
		{
		case 1:	wynik = a;				break;
		case 2:	wynik = a + 31;			break;
		case 3:	wynik = a + 59;			break;
		case 4:	wynik = a + 90;			break;
		case 5:	wynik = a + 120;		break;
		case 6:	wynik = a + 151;		break;
		case 7:	wynik = a + 181;		break;
		case 8:	wynik = a + 212;		break;
		case 9:	wynik = a + 243;		break;
		case 10:wynik = a + 273;		break;
		case 11:wynik = a + 304;		break;
		case 12:wynik = a + 334;		break;
		}
	}

	return wynik;

}
void Funkcja_1()
{
	int dzien, miesiac, rok;
	cout << " Witaj w obliczaniu numeru dnia w roku za pomoca daty" << endl
		<< " Podaj dzien: ";
	cin >> dzien;

	cout << " Podaj miesiac: ";
	cin >> miesiac;

	cout << " Podaj rok: ";
	cin >> rok;

	if (sprawdzenie(dzien, miesiac, rok, Czy_Przestepny(rok)) == 1)
	{
		cout << " Numer naszego dnia to:  "
			<< obliczanie(dzien, miesiac, rok, Czy_Przestepny(rok)) << endl;
	}
	else if (Czy_Przestepny(rok) == true && dzien > 29 && miesiac == 2)
		cout << " Rok przestepny nie moze miec powyzej 29 dni ;)" << endl;
	else if (Czy_Przestepny(rok) == false && dzien > 28 && miesiac == 2)
		cout << " Luty w roku nieprzestepnym nie moze miec wiecej niz 28 dni ;)" << endl;

	else if (miesiac != 2)
		cout << " Wpisany przez Ciebie miesiac nie moze miec tyle dni ;)" << endl << endl;


	//system("pause");
	//return 0;
}