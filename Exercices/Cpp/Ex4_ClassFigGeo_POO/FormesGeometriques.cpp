#include "FormesGeometriques.h"
#include <iostream>

FormesGeometriques::FormesGeometriques() {
    Surface = 0.0;
    Perimetre = 0.0;
    std::cout << "Constructeur de FormesGeometriques" << std::endl;
}

double FormesGeometriques::CalculerSurface(double x1, double x2) {
    return 0.0; // Implémentation par défaut
}

double FormesGeometriques::CalculerPerimetre(double x1, double x2) {
    return 0.0; // Implémentation par défaut
}

double FormesGeometriques::GetSurface() {
    return Surface;
}

double FormesGeometriques::GetPerimetre() {
    return Perimetre;
}
