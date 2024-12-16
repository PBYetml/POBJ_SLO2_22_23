#ifndef TriangleRectangle_h
#define TriangleRectangle_h

#include "FormesGeometriques.h"


class TriangleRectangle : public FormesGeometriques {

 public:

     void CalculerSurface(double base, double hauteur);

     void CalculerPerimetre(double base, double hauteur);

};

#endif // TriangleRectangle_h
