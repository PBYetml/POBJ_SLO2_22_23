#include "Ligne.h" // Inclusion du fichier d'en-tête Ligne
#include <iostream> // Inclusion de la bibliothèque pour l'affichage via std::cout

// Méthode pour saisir les coordonnées des points de la ligne
void Ligne::EffectuerSaisie(int NoPoint) 
{
    double x, y; // Déclare deux variables locales pour stocker les coordonnées saisies
    if (NoPoint == 1) { // Si le point est le premier
        std::cout << "Entrez position X et Y du début de la ligne : "; // Invite pour le début de la ligne
    }
    else { // Sinon, c'est le second point
        std::cout << "Entrez position X et Y de la fin de la ligne : "; // Invite pour la fin de la ligne
    }
    std::cin >> x >> y; // Lecture des coordonnées saisies par l'utilisateur
    PairePoints[NoPoint - 1].SetXY(x, y); // Mise à jour des coordonnées dans le tableau de points
}

// Méthode pour dessiner la ligne
void Ligne::Dessiner() 
{
    std::cout << "Dessin d'une Ligne" << std::endl; // Affiche l'étiquette pour le dessin d'une ligne
    std::cout << "Début de la ligne : X = " << PairePoints[0].GetX() // Affiche la coordonnée X du premier point
        << " Y = " << PairePoints[0].GetY() << std::endl; // Affiche la coordonnée Y du premier point
    std::cout << "Fin de la ligne : X = " << PairePoints[1].GetX() // Affiche la coordonnée X du second point
        << " Y = " << PairePoints[1].GetY() << std::endl; // Affiche la coordonnée Y du second point
}

// Constructeur de la classe Ligne
Ligne::Ligne() : Figure() 
{ // Appelle le constructeur de la classe de base Figure
    std::cout << "Constructeur de Ligne" << std::endl; // Message indiquant la création d'une instance de Ligne
}

// Destructeur de la classe Ligne
Ligne::~Ligne() 
{
    std::cout << "Destructeur de Ligne" << std::endl; // Message indiquant la destruction d'une instance de Ligne
}
