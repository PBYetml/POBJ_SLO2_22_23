#ifndef Class Ex1_h
#define Class Ex1_h

class FormesGeométriques;

class Class Ex1 {

 public:

    void ExecuterLesCalculs(int CodeForme);

    int ChoisirForme();

    void SaisirParametres(int CodeForme);

    int main();

    void AfficherResultats(int CodeFrome);

 public:
    int CodeFormeChoisie;

 public:

    /**
     * @element-type FormesGeométriques
     */
    FormesGeométriques *myFormesGeométriques;
};

#endif // Class Ex1_h
