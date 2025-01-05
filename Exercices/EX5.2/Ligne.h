#ifndef Ligne_h // Vérifie si Ligne_h n'a pas déjà été défini
#define Ligne_h // Définit Ligne_h pour éviter les inclusions multiples

#include "Figure.h" // Inclusion de la classe de base Figure

// Définition de la classe Ligne, dérivée de la classe Figure
class Ligne : public Figure {
public:
    // Constructeur par défaut
    Ligne();

    // Destructeur
    ~Ligne();

    // Méthode pour saisir les coordonnées des points de la ligne
    void EffectuerSaisie(int NoPoint) override;

    // Méthode pour dessiner la ligne en affichant ses deux points
    void Dessiner() override;
};

#endif // Ligne_h // Fin de la définition conditionnelle pour éviter les inclusions multiples
