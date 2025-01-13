#ifndef Ellipse_h
#define Ellipse_h

#include "Figure.h"

class Ellipse : public Figure {
public:
    // Constructeur et destructeur
    Ellipse();
    ~Ellipse();

    // Méthodes spécifiques à l'ellipse
    void EffectuerSaisie(int NoPoint) override;
    void Dessiner() override;
};

#endif // Ellipse_h
