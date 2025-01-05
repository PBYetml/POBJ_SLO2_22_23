#include "Figure.h"
#include <iostream>

// Constructeur de la classe Figure
Figure::Figure() {
    PairePoints[0].SetXY(0, 0);
    PairePoints[1].SetXY(0, 0);
    std::cout << "Constructeur de Figure" << std::endl;
}

// Destructeur de la classe Figure
Figure::~Figure() {
    std::cout << "Destructeur de Figure" << std::endl;
}
