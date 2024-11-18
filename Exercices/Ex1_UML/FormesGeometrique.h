#ifndef FormesGeometrique_h
#define FormesGeometrique_h


class FormesGeometrique {

 public:

    virtual double CalculerSurface(double x1, double x2);

    virtual double CalculerPerimetre(double x1, double x2);

    double GetSurface();

    virtual double GetPerimetre();

 public:
    double Surface;
    double Perimetre;

};

#endif // FormesGeometrique_h
