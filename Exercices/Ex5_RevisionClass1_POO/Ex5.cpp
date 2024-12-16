// Fichier Ex5.cpp
// Programme principal pour utiliser Dessinateur et Figure

#include <iostream>
using namespace std; 

#include "Dessinateur.h"

int main(void)
{
	char Rep;
	Dessinateur DessinateurA, DessinateurB, DessinateurC;
	// Déclaration et création des dessinateurs
	
	DessinateurA.ConstruireFigure('L');
	DessinateurB.ConstruireFigure('R');
	DessinateurC.ConstruireFigure('E');


	DessinateurA.SaisirPositionXY(1);
	DessinateurA.SaisirPositionXY(2);

	DessinateurB.SaisirPositionXY(1);
	DessinateurB.SaisirPositionXY(2);

	DessinateurC.SaisirPositionXY(1);
	DessinateurC.SaisirPositionXY(2);

	DessinateurA.DessinerFigure();
	DessinateurB.DessinerFigure();
	DessinateurC.DessinerFigure();

	

	cout << "Cours SL228_POBJ CPP exercice 5" << endl;
	


	cout << "Entrez Q pour quitter !" << endl;
	cin >> Rep;
	return 0;
}

