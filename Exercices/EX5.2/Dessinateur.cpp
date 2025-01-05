#include "Dessinateur.h" // Inclusion du fichier d'en-tête Dessinateur
#include "Ligne.h"       // Inclusion de la classe Ligne
#include "Rectangle.h"   // Inclusion de la classe Rectangle
#include "Ellipse.h"     // Inclusion de la classe Ellipse
#include <iostream>      // Inclusion de la bibliothèque pour l'affichage via std::cout

// Constructeur de la classe Dessinateur
Dessinateur::Dessinateur() : MaFigure(nullptr) 
{
    // Initialise le pointeur MaFigure à nullptr
}

// Destructeur de la classe Dessinateur
Dessinateur::~Dessinateur() 
{
    delete MaFigure; // Libère la mémoire associée à MaFigure si elle a été allouée
}

// Méthode pour créer une figure en fonction du choix de l'utilisateur
void Dessinateur::ConstruireFigure(signed char Choix) 
{
    delete MaFigure; // Libère la mémoire de l'ancienne figure pour éviter les fuites
    switch (Choix) {
    case 'L':
        MaFigure = new Ligne(); // Alloue une nouvelle Ligne si le choix est 'L'
        break;
    case 'R':
        MaFigure = new Rectangle(); // Alloue un nouveau Rectangle si le choix est 'R'
        break;
    case 'E':
        MaFigure = new Ellipse(); // Alloue une nouvelle Ellipse si le choix est 'E'
        break;
    default:
        MaFigure = nullptr; // Si le choix est invalide, aucun objet n'est créé
        break;
    }
}

// Méthode pour saisir la position d'un point pour la figure associée
void Dessinateur::SaisirPositionXY(int NoPoint) 
{
    if (MaFigure) {
        MaFigure->EffectuerSaisie(NoPoint); // Appelle la méthode de saisie de la figure associée
    }
}

// Méthode pour dessiner la figure associée
void Dessinateur::DessinerFigure() 
{
    if (MaFigure) {
        MaFigure->Dessiner(); // Appelle la méthode Dessiner de la figure associée
    }
}

