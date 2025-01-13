#ifndef Point_h // Vérifie si Point_h n'a pas déjà été défini
#define Point_h // Définit Point_h pour éviter les inclusions multiples

// Définition de la classe Point
class Point {
public:
    // Méthode pour afficher les coordonnées X et Y du point
    void AfficherPoint();

    // Méthode pour définir les coordonnées X et Y du point
    void SetXY(double ValX, double ValY);

    // Méthode pour obtenir la coordonnée X du point
    double GetX();

    // Méthode pour obtenir la coordonnée Y du point
    double GetY();

private:
    double X; // Attribut pour stocker la coordonnée X
    double Y; // Attribut pour stocker la coordonnée Y
};

#endif // Point_h // Fin de la définition conditionnelle pour éviter les inclusions multiples
