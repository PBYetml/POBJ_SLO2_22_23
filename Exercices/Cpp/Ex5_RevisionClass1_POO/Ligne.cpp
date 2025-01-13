#include "Ligne.h"

// Saisit les coordonnées d'un point (n°1 ou n°2) pour la ligne
void Ligne::EffectuerSaisie(int NoPoint) {
    double x, y;
    std::cout << "Entrez les coordonnées X et Y pour le point " << NoPoint << ": ";
    std::cin >> x >> y;
    PairePoints[NoPoint - 1].SetXY(x, y);
}

// Affiche les informations de la ligne (les deux points)
void Ligne::Dessiner() {
    std::cout << "Ligne: ";
    PairePoints[0].AfficherPoint();
    std::cout << " - ";
    PairePoints[1].AfficherPoint();
    std::cout << std::endl;
}

// Constructeur de la classe Ligne
Ligne::Ligne() : Figure() {
    std::cout << "Constructeur de Ligne" << std::endl;
}

// Destructeur de la classe Ligne
Ligne::~Ligne() {
    std::cout << "Destructeur de Ligne" << std::endl;
}
