#ifndef Cercle_h
#define Cercle_h

#include "FormesGeometriques.h"


class Cercle : public FormesGeometriques {

 public:

     void CalculerSurface(double diametre, double zed);

     void CalculerPerimetre(double diametre, double zed);
};

#endif // Cercle_h
