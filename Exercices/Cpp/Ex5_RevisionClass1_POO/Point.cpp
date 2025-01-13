#include "Point.h"

// Affiche les coordonnées X et Y du point
void Point::AfficherPoint() {
    std::cout << "X = " << X << " Y = " << Y;
}

// Définit les coordonnées X et Y du point
void Point::SetXY(double ValX, double ValY) {
    X = ValX;
    Y = ValY;
}

// Retourne la coordonnée X du point
double Point::GetX() {
    return X;
}

// Retourne la coordonnée Y du point
double Point::GetY() {
    return Y;
}