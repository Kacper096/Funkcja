#include "stdafx.h"
#include <iostream>

using namespace std;

void Funkcja_3()
{
	for (int a = 1; a <= 98; a++)
		for (int b = 1; b <= 99; b++)
			for (int c = 1; c <= 100; c++)
				if (a*a + b * b == c * c)
					cout << a << " , " << b << " , " << c << endl;
}