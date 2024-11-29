#ifndef FormesGeométriques_h
#define FormesGeométriques_h

#include "Cercle.h"
#include "Rectangle.h"
#include "TriangleRectangle.h"


class FormesGeométriques : public TriangleRectangle, public Rectangle, public Cercle, public TriangleRectangle, public Rectangle, public Cercle {

 public:

    virtual double CalculerSurface(double x1, double x2);

    virtual double CalculerPerimetre(double x1, double x2);

    double GetSurface();

    double GetPerimetre();

 public:
    double Perimetre;

 private:
    double Surface;

};

#endif // FormesGeométriques_h
