// Fichier ExPersonnageArme.cpp
// Programme principal pour utiliser Personnage et Arme
#include <iostream>
using namespace std; 

#include "Personnage.h"	
#include "Arme.h"
#include "Epee.h"
#include "Hache.h"
#include "Couteau.h"
                                 

int main(void)
{
	char Rep;
	string test;                                 

	// déclaration des personnage
	// Class -> OBJET 
	Personnage Bob, Alain;
	

	// Attribution d'une arme à chaque personnage
	//myArme = objet => association 
	Bob.myArme = new Epee("glaive", 40);  // -> objet dynamique 
	Bob.myArme = new Hache("Bois", 20); 


	Alain.myArme = new Hache("double", 50);

	// détermination des tailles des objets
	cout << "creation Arme et Epee pour test taille" << endl;
	Arme Banale;
	
	Arme UneArme("Chose", 45);
	Epee UneEpee("Machin", 50);
	
	//Epee EpeeDemon = new Epee("Excalibur", 100); 
	
	cout << "Taille objet Arme : " << sizeof(UneArme) << endl;
	cout << "Taille objet Epee : " << sizeof(UneEpee) << endl;
	// Affichage des armes choisies
	Bob.myArme->Afficher();
	Alain.myArme->Afficher();

	//Changement d'arme pour Bob
	delete Bob.myArme;
	Bob.myArme = new Epee("claymore", 50);
	Bob.myArme->Afficher();

	// Test de Attaquer
	cout << endl;
	cout << "Test de Attaquer" << endl;
	cout << "Niveau vie de Alain : " << Alain.GetVie()  << endl;
	cout << "Niveau vie de Bob : " << Bob.GetVie()  << endl;
	Bob.Attaquer(Alain);
	Alain.Attaquer(Bob);
	
	cout << "Niveau vie de Alain : " << Alain.GetVie()  << endl;
	cout << "Niveau vie de Bob : " << Bob.GetVie()  << endl;
	cout << endl;

	// Test de delete -> lien avec le destructeur 
	delete Bob.myArme;
	delete Alain.myArme;

	cout << "Entrez Q pour quitter !" << endl;
	cin >> Rep;
	return 0;
}

