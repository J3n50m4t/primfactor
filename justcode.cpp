// VS Projekt oben - funktioniert evtl nur unter windows da system.pause


// primefactor_console.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
//Visual Studio includes
#include "stdafx.h"
//basic includes
#include <iostream>
#include<vector>

int main(void)
{
	int nWert = 0, berechnefuerzahl = 0;
	//zählvariablen
	int i = 0, j = 0;
	std::cout << "Bitte geben sie einen Integer-Wert ein!" << std::endl;
	std::cin >> nWert;
	std::cout << std::endl <<"Wert setzt sich zusammen aus: ";
	for (int k = 2; k <= nWert; k++){
		std::cout << std::endl << "Berechnung fuer " << k << ": ";
		berechnefuerzahl = k;
		j = 0;
		for (i = 2; i <= berechnefuerzahl; i++) {
			while (berechnefuerzahl%i == 0) {
				if (j == 0)
					std::cout << i;
				else
					std::cout << " * " << i;
				j++;
				berechnefuerzahl /= i;
			}
		}
	}
	std::cout << std::endl;
	system("pause");
}
