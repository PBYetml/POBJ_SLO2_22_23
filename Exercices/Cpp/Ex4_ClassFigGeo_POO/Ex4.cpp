#include "Utilisateur.h"
#include <iostream>

int main() {
    Utilisateur UserA, UserB, UserC;

    std::cout << "Pour l'utilisateur A : TriangleRectangle" << std::endl;
    UserA.ChoisirForme(0); // Choix de TriangleRectangle
    UserA.SaisirLesParametres();
    UserA.ExecuterLesCalculs();
    UserA.AfficherResultats();

    std::cout << "\nPour l'utilisateur B : Rectangle" << std::endl;
    UserB.ChoisirForme(1); // Choix de Rectangle
    UserB.SaisirLesParametres();
    UserB.ExecuterLesCalculs();
    UserB.AfficherResultats();

    std::cout << "\nPour l'utilisateur C : Cercle" << std::endl;
    UserC.ChoisirForme(2); // Choix de Cercle
    UserC.SaisirLesParametres();
    UserC.ExecuterLesCalculs();
    UserC.AfficherResultats();

    std::cout << "\nAppuyez sur Q pour quitter !" << std::endl;
    return 0;
}
