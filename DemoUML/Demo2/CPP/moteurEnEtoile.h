#ifndef moteurEnEtoile_h
#define moteurEnEtoile_h

#include "moteur.h"


class moteurEnEtoile : public moteur {

 public:

    double Tourner();

    void Tourner(double piston);

 public:
    int position;
};

#endif // moteurEnEtoile_h
