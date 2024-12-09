#ifndef FORMESGEOMETRIQUES_h
#define FORMESGEOMETRIQUES_h

namespace Ex1 {
class TRIANGLERECTANGLE;
} /* End of namespace Ex1 */
class Ex1;

class FORMESGEOMETRIQUES {

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
     * @element-type TRIANGLERECTANGLE
     */
    Ex1::TRIANGLERECTANGLE *myTRIANGLERECTANGLE;

    /**
     * @element-type Ex1
     */
    Ex1 *myEx1;
};

#endif // FORMESGEOMETRIQUES_h
