#ifndef Rectangle_h // Vérifie si Rectangle_h n'a pas déjà été défini
#define Rectangle_h // Définit Rectangle_h pour éviter les inclusions multiples

#include "Figure.h" // Inclusion de la classe de base Figure

// Définition de la classe Rectangle, dérivée de la classe Figure
class Rectangle : public Figure {
public:
    // Constructeur par défaut
    Rectangle();

    // Destructeur
    ~Rectangle();

    // Méthode pour saisir les coordonnées des coins du rectangle
    void EffectuerSaisie(int NoPoint) override;

    // Méthode pour dessiner le rectangle en affichant ses coins
    void Dessiner() override;
};

#endif // Rectangle_h // Fin de la définition conditionnelle pour éviter les inclusions multiples
