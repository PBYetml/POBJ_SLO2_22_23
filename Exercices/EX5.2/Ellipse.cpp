#include "Ellipse.h" // Inclusion du fichier d'en-tête Ellipse
#include <iostream>  // Inclusion de la bibliothèque pour l'affichage via std::cout

// Méthode pour saisir les coordonnées des points spécifiques à l'ellipse
void Ellipse::EffectuerSaisie(int NoPoint) 
{
    double x, y; // Déclare deux variables locales pour stocker les coordonnées saisies
    if (NoPoint == 1) { // Si le point est le premier
        std::cout << "Entrez position X et Y du coin haut gauche du rectangle enveloppant l'Ellipse : ";
        // Invite pour le coin haut gauche du rectangle enveloppant
    }
    else { // Sinon, c'est le second point
        std::cout << "Entrez position X et Y du coin bas droit du rectangle enveloppant l'Ellipse : ";
        // Invite pour le coin bas droit du rectangle enveloppant
    }
    std::cin >> x >> y; // Lecture des coordonnées saisies par l'utilisateur
    PairePoints[NoPoint - 1].SetXY(x, y); // Mise à jour des coordonnées dans le tableau de points
}

// Méthode pour dessiner l'ellipse
void Ellipse::Dessiner() 
{
    std::cout << "Dessin d'une Ellipse" << std::endl; // Affiche l'étiquette pour le dessin d'une ellipse
    std::cout << "Position du coin haut gauche du rectangle enveloppant l'Ellipse : X = "
        << PairePoints[0].GetX() // Affiche la coordonnée X du premier point (coin haut gauche)
        << " Y = " << PairePoints[0].GetY() // Affiche la coordonnée Y du premier point (coin haut gauche)
        << std::endl;
    std::cout << "Position du coin bas droit du rectangle enveloppant l'Ellipse : X = "
        << PairePoints[1].GetX() // Affiche la coordonnée X du second point (coin bas droit)
        << " Y = " << PairePoints[1].GetY() // Affiche la coordonnée Y du second point (coin bas droit)
        << std::endl;
}

// Constructeur de la classe Ellipse
Ellipse::Ellipse() : Figure() 
{ // Appelle le constructeur de la classe de base Figure
    std::cout << "Constructeur d'Ellipse" << std::endl; // Message indiquant la création d'une instance d'Ellipse
}

// Destructeur de la classe Ellipse
Ellipse::~Ellipse() 
{
    std::cout << "Destructeur d'Ellipse" << std::endl; // Message indiquant la destruction d'une instance d'Ellipse
}
