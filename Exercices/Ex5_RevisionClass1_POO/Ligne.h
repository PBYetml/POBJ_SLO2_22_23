#ifndef Ligne_h
#define Ligne_h

#include "Figure.h"

class Ligne : public Figure {
public:
    // Constructeur et destructeur
    Ligne();
    ~Ligne();

    // Saisit un point de la ligne
    void EffectuerSaisie(int NoPoint);

    // Dessine la ligne (affiche les deux points)
    void Dessiner();
};

#endif // Ligne_h
