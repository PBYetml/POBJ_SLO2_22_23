#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include "FormesGeometriques.h"
#include <string> // Pour utiliser std::string

class Utilisateur {
private:
    FormesGeometriques* myFormesGeometriques;
    int m_CodeFormeChoisie;
    double x1, x2;

public:
    Utilisateur();
    ~Utilisateur();
    int ChoisirForme(int CodeForme);
    void SaisirLesParametres();
    void ExecuterLesCalculs();
    void AfficherResultats();
    void AfficherTitre();
};

#endif // UTILISATEUR_H
