#ifndef CERCLE_H
#define CERCLE_H

#include "FormesGeometriques.h"

class Cercle : public FormesGeometriques {
public:
    Cercle();
    ~Cercle() override = default;

    double CalculerSurface(double x1, double x2) override; // x1 = diametre, x2 = non utilisé
    double CalculerPerimetre(double x1, double x2) override; // x1 = diametre, x2 = non utilisé
};

#endif // CERCLE_H
