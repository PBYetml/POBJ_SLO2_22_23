#ifndef Conducteur_h
#define Conducteur_h

class vehicule;

class Conducteur {

 public:

	//constructeur méthode 
	Conducteur();

    int Conduire();

    int Marcher();

 public:
    bool vivant;
    string humain;
    bool permis ;
    char age;
    int newAttr;

 public:

    /**
     * @element-type vehicule
     */
    vehicule *myvehicule;
};

#endif // Conducteur_h
