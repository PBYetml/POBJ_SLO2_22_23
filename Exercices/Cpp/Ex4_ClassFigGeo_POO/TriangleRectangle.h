#ifndef TRIANGLE_RECTANGLE_H
#define TRIANGLE_RECTANGLE_H

#include "FormesGeometriques.h"

class TriangleRectangle : public FormesGeometriques {
public:
    TriangleRectangle();
    ~TriangleRectangle() override = default;

    double CalculerSurface(double base, double hauteur) override;
    double CalculerPerimetre(double base, double hauteur) override;
};

#endif // TRIANGLE_RECTANGLE_H
