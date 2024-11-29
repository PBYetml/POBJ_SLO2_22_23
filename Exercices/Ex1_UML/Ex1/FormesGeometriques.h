#ifndef FormesGeometriques_h
#define FormesGeometriques_h

class Ex1;

class FormesGeometriques {

 public:

    virtual double CalculerSurface(double x1, double x2);

    virtual double CalculerPerimetre(double x1, double x2);

    virtual double GetSurface();

    virtual double GetPerimetre();


 private:
    double Surface;
    double Perimetre;

 public:

    /**
     * @element-type Ex1
     */
    Ex1 *myEx1;
};

#endif // FormesGeometriques_h
