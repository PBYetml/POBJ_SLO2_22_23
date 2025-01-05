#ifndef Point_h
#define Point_h

class Point {
public:
    // Affiche les coordonnées du point
    void AfficherPoint();

    // Définit les coordonnées du point
    void SetXY(double ValX, double ValY);

    // Accesseurs pour X et Y
    double GetX();
    double GetY();

private:
    // Coordonnées du point
    double X;
    double Y;
};

#endif // Point_h