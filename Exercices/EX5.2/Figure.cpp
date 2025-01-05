#include "Figure.h" // Inclusion du fichier d'en-tête de la classe Figure
#include <iostream> // Inclusion de la bibliothèque pour l'affichage via std::cout

// Constructeur de la classe Figure
Figure::Figure() 
{
    PairePoints[0].SetXY(0, 0); // Initialise le premier point à (0, 0)
    PairePoints[1].SetXY(0, 0); // Initialise le second point à (0, 0)
    std::cout << "Constructeur de Figure" << std::endl; // Indique la création d'une figure
}

// Destructeur de la classe Figure
Figure::~Figure() 
{
    std::cout << "Destructeur de Figure" << std::endl; // Indique la destruction d'une figure
}
