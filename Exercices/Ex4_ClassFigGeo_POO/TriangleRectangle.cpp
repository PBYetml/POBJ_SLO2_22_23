#include "TriangleRectangle.h"
#include <cmath> // Pour sqrt
#include <iostream>

TriangleRectangle::TriangleRectangle() : FormesGeometriques() {
    std::cout << "Constructeur de TriangleRectangle" << std::endl;
}

double TriangleRectangle::CalculerSurface(double base, double hauteur) {
    Surface = 0.5 * base * hauteur; // Surface du triangle rectangle
    return Surface;
}

double TriangleRectangle::CalculerPerimetre(double base, double hauteur) {
    double hypotenuse = std::sqrt(base * base + hauteur * hauteur); // Hypoténuse
    Perimetre = base + hauteur + hypotenuse; // Périmètre du triangle rectangle
    return Perimetre;
}
