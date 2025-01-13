#ifndef Figure_h // Vérifie si Figure_h n'a pas déjà été défini
#define Figure_h // Définit Figure_h pour éviter les inclusions multiples

#include "Point.h" // Inclusion de la classe Point, utilisée pour définir une figure

// Définition de la classe abstraite Figure
class Figure {
public:
    // Constructeur par défaut
    Figure();

    // Destructeur virtuel pour garantir la destruction correcte des classes dérivées
    virtual ~Figure();

    // Méthode virtuelle pure pour saisir les coordonnées, à implémenter dans les classes dérivées
    virtual void EffectuerSaisie(int NoPoint) = 0;

    // Méthode virtuelle pure pour dessiner la figure, à implémenter dans les classes dérivées
    virtual void Dessiner() = 0;

protected:
    Point PairePoints[2]; // Tableau de deux points définissant les limites de la figure
};

#endif // Figure_h // Fin de la définition conditionnelle pour éviter les inclusions multiples
