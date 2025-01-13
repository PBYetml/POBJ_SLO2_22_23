#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : FormesGeometriques() {
    std::cout << "Constructeur de Rectangle" << std::endl;
}

double Rectangle::CalculerSurface(double largeur, double hauteur) {
    Surface = largeur * hauteur; // Calcul de la surface
    return Surface;
}

double Rectangle::CalculerPerimetre(double largeur, double hauteur) {
    Perimetre = 2 * (largeur + hauteur); // Calcul du périmètre
    return Perimetre;
}
