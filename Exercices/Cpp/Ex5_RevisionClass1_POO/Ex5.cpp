// Ex5.cpp
#include <iostream>
#include "Dessinateur.h"

int main() {
    char Rep;
    Dessinateur DessinateurA, DessinateurB, DessinateurC;

    // Création des dessinateurs avec différentes figures
    DessinateurA.ConstruireFigure('L'); // Ligne
    DessinateurB.ConstruireFigure('R'); // Rectangle
    DessinateurC.ConstruireFigure('E'); // Ellipse

    // Saisie des positions pour chaque dessinateur
    DessinateurA.SaisirPositionXY(1);
    DessinateurA.SaisirPositionXY(2);
    DessinateurB.SaisirPositionXY(1);
    DessinateurB.SaisirPositionXY(2);
    DessinateurC.SaisirPositionXY(1);
    DessinateurC.SaisirPositionXY(2);

    // Dessin des figures
    DessinateurA.DessinerFigure();
    DessinateurB.DessinerFigure();
    DessinateurC.DessinerFigure();

    std::cout << "Cours SL228_POBJ CPP exercice 5" << std::endl;
    std::cout << "Entrez Q pour quitter !" << std::endl;
    std::cin >> Rep;
    return 0;
}

