#ifndef TriangleRectangle_h
#define TriangleRectangle_h

#include "FormesGeometrique.h"


class TriangleRectangle : public FormesGeometrique {

 public:

    virtual double CalculerSurface(double Base, double Hauteur);

    virtual double CalculerPerimetre(double Base, double Hauter);
};

#endif // TriangleRectangle_h
