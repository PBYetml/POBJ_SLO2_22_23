#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "FormesGeometriques.h"

class Rectangle : public FormesGeometriques {
public:
    Rectangle();
    ~Rectangle() override = default;

    double CalculerSurface(double largeur, double hauteur) override;
    double CalculerPerimetre(double largeur, double hauteur) override;
};

#endif // RECTANGLE_H
