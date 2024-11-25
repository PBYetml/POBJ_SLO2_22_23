/*
Add canva


*/

#include <iostream>
#include <string>
//#include <stdint.h> //Pas optimisé pour du Cpp
#include <cstdint> //Obtimisé pour le Cpp

//-- personal libraisies -> class --// 
void Diviser(int var1, int var2, float &result);

void main() 
{
	// Type primitif
	bool valc; //-> 1 octect //-> Vraiement true ou false pas égale à 1 ou 0
	char valB; //-> 1 octect
	short valc; //-> 2 octect
	int vald; //-> 4 octect
	long vale; //-> 4 octect

	// Type normalisé 
	int8_t Vald2; 

	//--Object--//
	std::string chaine, chaine2;
	chaine = "Hello";
	chaine2 = "SLO";
	// Classe

	//-- Utilisation d'en object 
	Vald2 = chaine.length();
	//-- Statique 

	//--msg user--// 
	std::cout << "HELLO SLO !!! \n" << std::endl
	std::cout << chaine << "" << chaine2 << std::endl

	//-- dynamique

}

void Diviser(int var1, int var2, float &result)
{
	result = var1 / var2; 
}