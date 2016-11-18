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
	// Um in der inneren for schleife (die mit dem i) rechnen zu können brauchen wir eine zwischenspeicerhvariable
	// sonst haben wir immer nur nWert der immer gleich ist
	int nWert = 0, berechnefuerzahl = 0;

	//zählvariablen
	int i = 0, j = 0;
	std::cout << "Bitte geben sie einen Integer-Wert ein!" << std::endl;
	std::cin >> nWert;
	std::cout << std::endl <<"Wert setzt sich zusammen aus: ";
	// Bis hier ist alles klar nehme ich mal an - bisschen in bisschen out. fertig

	// Wir brauchen zunächst eine schleife die n mal ausgeführt wird - nhmen wir an nWert = 60
	// Die schleife läuft also 60 - 2 mal da sie bei 2 - der kleinsten primzahl - beginnt -
	// 0 und 1 haben keine Werte sind also irrelevant
	for (int k = 2; k <= nWert; k++){
		// Um zuwissen in welche Berechnung wir stecken geben wir einfach den aktuellen k Wert aus - der wird danach auf Berechnezahl gesetzt.
		// Würden wir berechnezahl nicht auf k setzen sondern einfach k nehmen so hätten wir nach einem schleifendurchlauf
		// ein blödsinnigen Wert, da in zeile 49 berechnezahl /= i gesetzt wird und damit immer verändert wird - wir müssen also
		// berechnefuerzahl zu anfang jeder berechung auf k setzen, deshalb vor der inneren schleife (läuft also 58mal)
		std::cout << std::endl << "Berechnung fuer " << k << ": ";
		berechnefuerzahl = k;
		// Im prinzip gleiches gilt für j - es wird in der while schleife hochgesetzt und dadurch wär es dann völliger schwachsnn - also vor beginn jeder rechnung reset
		j = 0;

		for (i = 2; i <= berechnefuerzahl; i++) {
			// berechne für zahl ist also der wert von 2 - n und wird demensptechend of auseführrt. Lässt sich eine zahl modulo 2 = 0 teilen ist es ein primfaktor - mehr gibts her nicht zu erkläre - das ist einfach so :D
			while (berechnefuerzahl%i == 0) {
				// Das ist eine reine überprüfung ob es die erste zahl ist oder nicht - dadurch kommt 2 * 2 raus und nicht *2 *2 (logisch oder? )
				if (j == 0)
					std::cout << i;
				else
					std::cout << " * " << i;
					// danach wird j erhöht damit die nchste zahl  * x wird
				j++;
				// am ende wird berechnefuerzahl durch i geteilt - /= ist der Operator für berechnefuerzahl = berechnefuerzahl / i ( ähnlich i++);
				berechnefuerzahl /= i;
			}
		}
	}
	std::cout << std::endl;
	system("pause");
}
