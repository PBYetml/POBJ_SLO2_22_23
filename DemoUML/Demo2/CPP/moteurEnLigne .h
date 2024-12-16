#ifndef moteurEnLigne _h
#define moteurEnLigne _h

#include "moteur.h"


class moteurEnLigne  : public moteur {

 public:

    double Tourner(double essence );

    int Tourner(char essence);

 public:
    int position;

 public:

    /**
     * @element-type moteur
     */
    moteur *mymoteur;
};

#endif // moteurEnLigne _h
