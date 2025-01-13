#include "Point.h" // Inclusion du fichier d'en-tête de la classe Point
#include <iostream> // Inclusion de la bibliothèque pour l'affichage via std::cout

// Méthode pour afficher les coordonnées X et Y du point
void Point::AfficherPoint() 
{
    std::cout << "X = " << X << " Y = " << Y; // Affiche les coordonnées sous forme X = valeur, Y = valeur
}

// Méthode pour définir les coordonnées X et Y du point
void Point::SetXY(double ValX, double ValY) 
{
    X = ValX; // Assigne la valeur ValX à l'attribut X
    Y = ValY; // Assigne la valeur ValY à l'attribut Y
}

// Méthode pour récupérer la coordonnée X
double Point::GetX() 
{
    return X; // Retourne la valeur de l'attribut X
}

// Méthode pour récupérer la coordonnée Y
double Point::GetY() 
{
    return Y; // Retourne la valeur de l'attribut Y
}
