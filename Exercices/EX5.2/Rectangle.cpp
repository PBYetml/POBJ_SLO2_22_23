#include "Rectangle.h" // Inclusion du fichier d'en-tête Rectangle
#include <iostream>    // Inclusion de la bibliothèque pour l'affichage via std::cout

// Méthode pour saisir les coordonnées des coins du rectangle
void Rectangle::EffectuerSaisie(int NoPoint) {
    double x, y; // Déclare deux variables locales pour stocker les coordonnées saisies
    if (NoPoint == 1) { // Si le point est le premier
        std::cout << "Entrez position X et Y du coin haut gauche du rectangle : "; // Invite pour le coin haut gauche
    }
    else { // Sinon, c'est le second point
        std::cout << "Entrez position X et Y du coin bas droit du rectangle : "; // Invite pour le coin bas droit
    }
    std::cin >> x >> y; // Lecture des coordonnées saisies par l'utilisateur
    PairePoints[NoPoint - 1].SetXY(x, y); // Mise à jour des coordonnées dans le tableau de points
}

// Méthode pour dessiner le rectangle
void Rectangle::Dessiner() {
    std::cout << "Dessin d'un Rectangle" << std::endl; // Affiche l'étiquette pour le dessin d'un rectangle
    std::cout << "Position du coin haut gauche du rectangle : X = "
        << PairePoints[0].GetX() // Affiche la coordonnée X du premier point (coin haut gauche)
        << " Y = " << PairePoints[0].GetY() // Affiche la coordonnée Y du premier point (coin haut gauche)
        << std::endl;
    std::cout << "Position du coin bas droit du rectangle : X = "
        << PairePoints[1].GetX() // Affiche la coordonnée X du second point (coin bas droit)
        << " Y = " << PairePoints[1].GetY() // Affiche la coordonnée Y du second point (coin bas droit)
        << std::endl;
}

// Constructeur de la classe Rectangle
Rectangle::Rectangle() : Figure() { // Appelle le constructeur de la classe de base Figure
    std::cout << "Constructeur de Rectangle" << std::endl; // Message indiquant la création d'une instance de Rectangle
}

// Destructeur de la classe Rectangle
Rectangle::~Rectangle() {
    std::cout << "Destructeur de Rectangle" << std::endl; // Message indiquant la destruction d'une instance de Rectangle
}
