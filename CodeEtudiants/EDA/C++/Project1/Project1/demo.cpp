//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: demo.cpp
// Date de création 	: 18.11.2024
// Date de modification : xx.xx.20xx
//
// Auteur 				: Etienne De Oliveira
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
//-- librairie standart --// 
#include <iostream>					// equivalent at the <stdio.h> in C
#include <string>					// for the objects linked to the string
#include <cstdint>					// lien avec la lib stdint.h

//-- librarire personnelle --// 
#include "Classdemo.h"
#include "user.h"

void Diviser(int var1, int var2, float &result);
int Diviser(float var1, float var2, float& result);
int Diviser(int& result, double var1, double var2 = 10);

//-- programme principale --//
void main()
{
	//-- déclaration de variable --//
	//-- statique --//
	//-- type primitif --// 
	//-- entier --//
	bool valG = true;	//-> 1 octet
	char valD;			//-> 1 octet
	short valA;			//-> 2 octet
	int valX;			//-> 4 octet 
	long valE;			//-> 4 octet 

	//-- reels --//
	float valC;			//-> 4 octet 
	double valB;		//-> 8 octet 

	//-- déclaration d'un pointeur
	int* ptTBdemo;
	
	ptTBdemo = new int[10];

	//-- objet--// 
	std::string chaine, chaine2;
	chaine = "Hello";
	chaine2 = "SLO";

	//-- utilisation d'un objet -> longueur de la chaine de caractère
	valX = chaine.length();
	// pour prendre valeur clavier
	std::cin >> valX;   // pour valeur entière
	std::cin >> valC;   // pour valeur flottante
	std::cin >> chaine; // pour une chaine

	//--- statique 
	//user objetUser = user::user(100, 0);
	//user objet2User = user::user(100, -100);

	//valC = objetUser.GetNumberValue();

	//while (!objetUser.ValiderValUser(valC))
	//{
	//	valC = objetUser.GetNumberValue();
	//}


	/*while (!objetUser.ValiderValUser(objetUser.GetNumberValue()))
	{
	}*/





	//user::demoStatic = 10; 
	// objetUser.FctDemoStatique(); 







	// REMARQUE : static en C : garder la valeur d'une variable dans une fct 
	//            static en C++ : pas besoin d'objet pour utiliser des méthodes ou attributs static 

	//--- dynamique




	//-- msg user --// 
	std::cout << chaine << "" << chaine2 << std::endl;
	std::cout << "HELLO SLO !! \n" << std::endl;
	Diviser(10, 5, valC);
	Diviser(valX, 5.5);

	//-- prendre une valeur du clavier --//
	//std::cin >> valD;		//-> exemple un caractère 
	//std::cin >> chaine;		//-> exemple chaine de caractère 
	//std::cin >> valB;		//-> exemple valeur

	//chaine2 = chaine;			// copie d'un objet ->

	//valX = chaine2.length();	//chercher la longueur d'une chaine de caractère 

	//valA = chaine.find("on");	// chercher une occurence 
}
	//-- déclaration
	void Diviser(int var1, int var2, float &result)
	{
		 result = var1 / var2;
	}

	int Diviser(float var1, float var2, float& result)
	{
		return result = var1 / var2;
	}

	int Diviser(int& result, double var1, double var2)
	{
		return result = var1 / var2;
	}
