#ifndef vehicule_h
#define vehicule_h

#include "moteur.h"


class vehicule {

 public: 
	//constructeur 
	vehicule(); 
	
	//destructeur 
	~vehicule(); 

 public:
    char sieges;
    char roues;

 public:

    /**
     * @element-type moteur
     */
    moteur mymoteur;

};

#endif // vehicule_h
