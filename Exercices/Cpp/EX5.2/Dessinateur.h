#ifndef Dessinateur_h // Vérifie si Dessinateur_h n'a pas déjà été défini
#define Dessinateur_h // Définit Dessinateur_h pour éviter les inclusions multiples

#include "Figure.h" // Inclusion de la classe Figure, manipulée par le Dessinateur

// Définition de la classe Dessinateur
class Dessinateur {
public:
    // Constructeur par défaut
    Dessinateur();

    // Destructeur
    ~Dessinateur();

    // Méthode pour créer une figure en fonction du choix de l'utilisateur
    void ConstruireFigure(signed char Choix);

    // Méthode pour saisir les coordonnées d'un point pour la figure associée
    void SaisirPositionXY(int NoPoint);

    // Méthode pour dessiner la figure associée
    void DessinerFigure();

private:
    Figure* MaFigure; // Pointeur vers la figure associée au dessinateur
};

#endif // Dessinateur_h // Fin de la définition conditionnelle pour éviter les inclusions multiples
