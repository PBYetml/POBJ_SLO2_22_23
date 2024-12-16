#include "Dessinateur.h"
#include "Figure.h"
#include "Ligne.h"
#include "Ellipse.h"
#include "Rectangle.h"




void Dessinateur::ConstruireFigure(signed char Choix)
{
    m_FigureChoisie
    switch(Choix)
        case 'L' :
            m_FigureChoisie = new Ligne();
            break;
        case 'R' :
            m_FigureChoisie = new Rectangle();
            break;
        case 'E':
            m_FigureChoisie = new Ellipse();
            break;
        default:
            break;
}

void Dessinateur::~ConstruireFigure() 
{
    delete m_FigureChoisie;
}

void Dessinateur::SaisirPositionXY(int NoPoint)
{
    std::cout << "Entrez la base du TriangleRectangle : ";
    std::cin >> x1;
    EffectuerSaisie(NoPoint);
    std::cout << "Entrez la base du TriangleRectangle : ";
    std::cin >> x1;
    EffectuerSaisie(NoPoint);
}


void Dessinateur::DessinerFigure()
{
    Dessiner();
}
