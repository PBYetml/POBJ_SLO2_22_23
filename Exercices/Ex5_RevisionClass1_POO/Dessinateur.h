#ifndef Dessinateur_h
#define Dessinateur_h

class Figure;

class Dessinateur {

 public:

    void ConstruireFigure(signed char Choix);

    void SaisirPositionXY(int NoPoint);

    void DessinerFigure();


 private:
    signed char m_FigureChoisie;

 public:

    /**
     * @element-type Figure
     */
    Figure *MaFigure;
};

#endif // Dessinateur_h
