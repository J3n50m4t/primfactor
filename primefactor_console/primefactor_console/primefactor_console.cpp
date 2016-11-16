// primefactor_console.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
//Visual Studio includes
#include "stdafx.h"
//basic includes
#include <iostream>
//for getchar function
#include <cstdio>

int main(void)
{
	int nWert = 0;
	//zählvariablen
	int i = 0, j = 0;
	std::cout << "Bitte geben sie einen Integer-Wert ein!" << std::endl;
	std::cin >> nWert;
	std::cout << std::endl <<"Wert setzt sich zusammen aus: ";
	for (i = 2; i <= nWert; i++) {
		while (nWert%i == 0) {
			if (j == 0) 
				std::cout << i;
			else 
				std::cout << " * " << i;
			j++;
			nWert /= i;
		}
	}
	std::cout << std::endl;
	system("pause");
}
