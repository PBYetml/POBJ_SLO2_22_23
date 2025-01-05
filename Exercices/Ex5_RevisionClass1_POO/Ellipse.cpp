#include "Ellipse.h"

// Saisit les coordonnées des points spécifiques à l'ellipse
void Ellipse::EffectuerSaisie(int NoPoint) {
    double x, y;
    std::cout << "Entrez les coordonnées X et Y pour le point " << NoPoint << " de l'ellipse: ";
    std::cin >> x >> y;
    PairePoints[NoPoint - 1].SetXY(x, y);
}

// Dessine l'ellipse en affichant ses points
void Ellipse::Dessiner() {
    std::cout << "Ellipse: ";
    PairePoints[0].AfficherPoint();
    std::cout << " - ";
    PairePoints[1].AfficherPoint();
    std::cout << std::endl;
}

// Constructeur de la classe Ellipse
Ellipse::Ellipse() : Figure() {
    std::cout << "Constructeur d'Ellipse" << std::endl;
}

// Destructeur de la classe Ellipse
Ellipse::~Ellipse() {
    std::cout << "Destructeur d'Ellipse" << std::endl;
}
