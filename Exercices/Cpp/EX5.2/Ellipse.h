#ifndef Ellipse_h // Vérifie si Ellipse_h n'a pas déjà été défini
#define Ellipse_h // Définit Ellipse_h pour éviter les inclusions multiples

#include "Figure.h" // Inclusion de la classe de base Figure

// Définition de la classe Ellipse, dérivée de la classe Figure
class Ellipse : public Figure {
public:
    // Constructeur par défaut
    Ellipse();

    // Destructeur
    ~Ellipse();

    // Méthode pour saisir les coordonnées des points de l'ellipse
    void EffectuerSaisie(int NoPoint) override;

    // Méthode pour dessiner l'ellipse en affichant ses deux points
    void Dessiner() override;
};

#endif // Ellipse_h // Fin de la définition conditionnelle pour éviter les inclusions multiples
