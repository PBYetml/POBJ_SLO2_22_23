#ifndef FORMESGEOMETRIQUES_H
#define FORMESGEOMETRIQUES_H

class FormesGeometriques {
public:
    FormesGeometriques();
    virtual ~FormesGeometriques() = default;

    virtual double CalculerSurface(double x1, double x2) = 0; // Méthode pure virtuelle
    virtual double CalculerPerimetre(double x1, double x2) = 0; // Méthode pure virtuelle

    double GetSurface();
    double GetPerimetre();

protected:
    double Surface;
    double Perimetre;
};

#endif // FORMESGEOMETRIQUES_H
