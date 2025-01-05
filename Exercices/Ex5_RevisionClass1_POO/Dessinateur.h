#ifndef Dessinateur_h
#define Dessinateur_h

#include "Figure.h"

class Dessinateur {
public:
    // Constructeur et destructeur
    Dessinateur();
    ~Dessinateur();

    // Méthodes principales
    void ConstruireFigure(signed char Choix);
    void SaisirPositionXY(int NoPoint);
    void DessinerFigure();

private:
    // Pointeur vers la figure associée
    Figure* MaFigure;
};

#endif // Dessinateur_h
