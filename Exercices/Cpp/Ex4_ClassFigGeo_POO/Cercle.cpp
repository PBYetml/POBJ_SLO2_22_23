#include "Cercle.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

Cercle::Cercle() : FormesGeometriques() {
    std::cout << "Constructeur de Cercle" << std::endl;
}

double Cercle::CalculerSurface(double x1, double /* x2 */) {
    double rayon = x1 / 2.0;
    Surface = M_PI * rayon * rayon; // Calcul de la surface
    return Surface;
}

double Cercle::CalculerPerimetre(double x1, double /* x2 */) {
    Perimetre = M_PI * x1; // Calcul du périmètre
    return Perimetre;
}
