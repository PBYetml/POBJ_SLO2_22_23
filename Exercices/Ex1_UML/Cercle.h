#ifndef Cercle_h
#define Cercle_h

#include "FormesGeometrique.h"


class Cercle : public FormesGeometrique {

 public:

    virtual double CalculerSurface(double Diametre);

    virtual double CalculerPerimetre(double Diametre);
};

#endif // Cercle_h
