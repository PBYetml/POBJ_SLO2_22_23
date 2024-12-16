#ifndef moteur_h
#define moteur_h


class moteur {

 public:

    virtual int Tourner();

    void Lubrifier(float huile_l);


 protected:
    char piston;
    char cylindres ;
    char injecteur ;
    String position;

};

#endif // moteur_h
