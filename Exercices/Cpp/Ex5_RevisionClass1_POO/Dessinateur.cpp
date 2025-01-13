#include "Dessinateur.h"
#include "Ligne.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include <iostream>

// Constructeur de la classe Dessinateur
Dessinateur::Dessinateur() : MaFigure(nullptr) {}

// Destructeur de la classe Dessinateur (libère la mémoire associée à MaFigure)
Dessinateur::~Dessinateur() {
    delete MaFigure;
}

// Crée une figure en fonction du choix de l'utilisateur
void Dessinateur::ConstruireFigure(signed char Choix) {
    delete MaFigure; // Évite les fuites mémoire
    switch (Choix) {
    case 'L':
        MaFigure = new Ligne();
        break;
    case 'R':
        MaFigure = new Rectangle();
        break;
    case 'E':
        MaFigure = new Ellipse();
        break;
    default:
        MaFigure = nullptr;
        break;
    }
}

// Saisit la position pour un point de la figure associée
void Dessinateur::SaisirPositionXY(int NoPoint) {
    if (MaFigure) {
        MaFigure->EffectuerSaisie(NoPoint);
    }
}

// Dessine la figure associée
void Dessinateur::DessinerFigure() {
    if (MaFigure) {
        MaFigure->Dessiner();
    }
}
