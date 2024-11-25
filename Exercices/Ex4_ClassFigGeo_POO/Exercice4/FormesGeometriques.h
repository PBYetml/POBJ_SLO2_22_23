#ifndef FormesGeometriques_h
#define FormesGeometriques_h


class FormesGeometriques {

 public:

    virtual void CalculerSurface(double x1, double x2);

    virtual void CalculerPerimetre(double x1, double x2);

    double GetSurface();

    double GetPerimetre();


 protected:
    double Surface;
    double Perimetre;

};

#endif // FormesGeometriques_h
