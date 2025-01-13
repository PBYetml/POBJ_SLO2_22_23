#include "Rectangle.h"

// Saisit les coordonnées des coins du rectangle
void Rectangle::EffectuerSaisie(int NoPoint) {
    double x, y;
    std::cout << "Entrez les coordonnées X et Y pour le point " << NoPoint << " du rectangle: ";
    std::cin >> x >> y;
    PairePoints[NoPoint - 1].SetXY(x, y);
}

// Dessine le rectangle en affichant ses coins
void Rectangle::Dessiner() {
    std::cout << "Rectangle: ";
    PairePoints[0].AfficherPoint();
    std::cout << " - ";
    PairePoints[1].AfficherPoint();
    std::cout << std::endl;
}

// Constructeur de la classe Rectangle
Rectangle::Rectangle() : Figure() {
    std::cout << "Constructeur de Rectangle" << std::endl;
}

// Destructeur de la classe Rectangle
Rectangle::~Rectangle() {
    std::cout << "Destructeur de Rectangle" << std::endl;
}
