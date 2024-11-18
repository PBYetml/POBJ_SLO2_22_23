// Canevas Ex4  SL228_POBJ  CPP
// C. Huber 13.12.2016

#include <iostream>
using namespace std;

#include "Exercice4/Utilisateur.h"

int main (void)
{
	Utilisateur UserA, UserB, UserC;
	UserA.ChoisirForme(0);
	UserA.SaisirLesParametres();
	UserA.ExecuterLesCalculs();
	UserA.AfficherResultats();

	UserB.ChoisirForme(1);
	UserB.SaisirLesParametres();
	UserB.ExecuterLesCalculs();
	UserB.AfficherResultats();


	UserC.ChoisirForme(2);
	UserC.SaisirLesParametres();
	UserC.ExecuterLesCalculs();
	UserC.AfficherResultats();

	return 0;
}