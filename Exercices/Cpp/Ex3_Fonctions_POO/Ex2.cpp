// Canevas Ex2 SL228_POBJ language C++ 
// Visual Studio 2015
// 11.11.2016 C. Huber

#include <iostream>
#include <iomanip>
using namespace std;


// Fonction Extract
// Fonction Extract
unsigned short Extract(unsigned long totalSeconds, unsigned short& hours, unsigned short& minutes) {
	// Calcul des heures
	hours = totalSeconds / 3600;
	// Calcul des minutes restantes
	minutes = (totalSeconds % 3600) / 60;
	// Retourne les secondes restantes
	return totalSeconds % 60;
}

// Fonction AfficheB


// Fonction CalculSurfaceRectangle


int main (void)
{
	char UserAnswer;
	int ValA, ValB;
	unsigned short hours, minutes, seconds; // Variables pour Test A
	// Variables pour test A, B et C
	

	// a adapter
	cout << "Exercice 2 : Mendes Leo" << endl;


	do {
		cout << "Test A, B ou C, Q pour Quitter" << endl;
		cin >> UserAnswer;
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				cout << "TestA: entrez un nombre de secondes" << endl;
				cin >> ValA;
				if (ValA >= 0) {
					seconds = Extract(static_cast<unsigned long>(ValA), hours, minutes);
					cout << "ValA = " << ValA
						<< " NbHeures = " << hours
						<< " NbMinutes = " << minutes
						<< " NbSecondes = " << seconds << endl;
				}
				else {
					cout << "Veuillez entrer une valeur positive." << endl;
				}
			break;

			case 'B':
			case 'b':
				cout << "TestB: entrez un nombre " <<  endl;
				cin >> ValB; 
				
			break;

			case 'C':
			case 'c':
				cout << "TestC: calculs surface " <<  endl;

				// a)	Avec 2 paramètres int 25 et 45
				
				// b)	Avec 2 paramètres double 23.25 et 44.33'
				
				// c)	Avec 4 paramètres int 20,20, 60,40
				

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}