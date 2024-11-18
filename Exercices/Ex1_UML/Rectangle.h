#ifndef Rectangle_h
#define Rectangle_h

#include "FormesGeometrique.h"


class Rectangle : public FormesGeometrique {

 public:

    double CalculerSurface(double Largeur, double Hauteur);

    virtual double CalculerPerimetre(double Largeur, double Hauteur);
};

#endif // Rectangle_h
