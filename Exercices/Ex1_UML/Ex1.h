#ifndef Ex1_h
#define Ex1_h

class FormesGeometrique;

class Ex1 {

 public:

    void SaisirParameters(int CodeForme);

    int main();

    void ExectuterLesCalculs(int CodeForme);

    void AfficherResultats(int CodeForme);

    virtual int ChoisirForme();

 public:
    int CodeFormeChoisie;

 public:

    /**
     * @element-type FormesGeometrique
     */
    FormesGeometrique *myFormesGeometrique;
};

#endif // Ex1_h
