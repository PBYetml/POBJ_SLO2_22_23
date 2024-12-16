#ifndef Personnage_h
#define Personnage_h

#include "Personnage.h"

class Arme;

class Personnage {

 public:

    void boirePotionDeVie(int Quantite);

    void Attaquer(Personnage &Cible);     // passage par reference 

    void RecevoirDegats(int nbDegats);

    int GetVie();


	// surcharge de constructeur 
	// constructeur par défaut 
	// constructeur -> aucun paramètre de sortie 
    Personnage();
	
	// constructeur surchargé 
    Personnage(int ValVie);
	
	// destructeur -> lié à un objet dynamique 
	// aucun paramètre d'entrée
	~Personnage();


 private:
    int m_vie;		// mémoire statique 

 public:

	//Arme monArme; 
    /**
     * @element-type Arme
     */
    Arme *myArme;	// mémoire dynamique 
	Arme myArme2;	// mémoire statique  
};

#endif // Personnage_h
