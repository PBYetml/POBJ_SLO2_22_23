#include <iostream> // Inclusion de la bibliothèque standard pour les entrées/sorties
#include "Dessinateur.h" // Inclusion du fichier d'en-tête Dessinateur

int main() {
    char Rep; // Variable pour capturer la réponse de l'utilisateur avant de quitter le programme
    Dessinateur DessinateurA, DessinateurB, DessinateurC; // Création de trois objets Dessinateur

    // Construction des figures pour chaque dessinateur
    DessinateurA.ConstruireFigure('L'); // Associe une ligne au DessinateurA
    DessinateurB.ConstruireFigure('R'); // Associe un rectangle au DessinateurB
    DessinateurC.ConstruireFigure('E'); // Associe une ellipse au DessinateurC

    // Saisie et dessin immédiat pour la ligne
    DessinateurA.SaisirPositionXY(1); // Saisit les coordonnées du premier point de la ligne
    DessinateurA.SaisirPositionXY(2); // Saisit les coordonnées du second point de la ligne
    DessinateurA.DessinerFigure(); // Dessine immédiatement la ligne

    // Saisie et dessin immédiat pour le rectangle
    DessinateurB.SaisirPositionXY(1); // Saisit les coordonnées du coin haut gauche du rectangle
    DessinateurB.SaisirPositionXY(2); // Saisit les coordonnées du coin bas droit du rectangle
    DessinateurB.DessinerFigure(); // Dessine immédiatement le rectangle

    // Saisie et dessin immédiat pour l'ellipse
    DessinateurC.SaisirPositionXY(1); // Saisit les coordonnées du coin haut gauche de l'ellipse
    DessinateurC.SaisirPositionXY(2); // Saisit les coordonnées du coin bas droit de l'ellipse
    DessinateurC.DessinerFigure(); // Dessine immédiatement l'ellipse

    // Message de fin de programme
    std::cout << "Cours SL228_POBJ CPP exercice 5" << std::endl; // Affiche un message d'identification du cours
    std::cout << "Entrez Q pour quitter !" << std::endl; // Invite l'utilisateur à quitter le programme
    std::cin >> Rep; // Lecture de la réponse de l'utilisateur
    return 0; // Fin du programme
}
