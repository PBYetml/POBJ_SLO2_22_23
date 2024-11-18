// Caneva Ex1 SL228_POBJ language C++
// Visual Studio 2015
// 11.11.2016 C. Huber

#include <iostream>
#include <iomanip>
#include <limits>

/*
Changements effectués lors de la conversion du code C en C++ :

1. Remplacement de `printf` et `scanf_s` :
   - Utilisation de `std::cout` pour l'affichage à la place de `printf`.
   - Utilisation de `std::cin` pour la saisie utilisateur à la place de `scanf_s`.

2. Gestion des résidus d'entrée :
   - Utilisation de `std::cin.ignore()` pour ignorer les caractères restants dans le flux d'entrée après la lecture.

3. Modularisation du code :
   - Création des fonctions `TestA()` et `TestB()` pour séparer les logiques des tests A et B.

4. Formatage des nombres flottants :
   - Utilisation de `std::fixed` et `std::setprecision(6)` pour contrôler la précision de l'affichage des valeurs en double précision.

5. Ajout d'un comportement par défaut pour les choix invalides :
   - Ajout d'un `default` dans le `switch` pour gérer les entrées utilisateur non reconnues.

6. Suppression des pointeurs inutiles et adaptation au style moderne de C++ :
   - Suppression de l'utilisation de pointeurs inutiles dans les fonctions de saisie.

*/


void TestA();
void TestB();

int main() {
    char UserAnswer;

    std::cout << "Exercice 1 : Mendes Léo\n";
    std::cout << "Solution en C a transformer en C++\n";

    do {
        std::cout << "Test A ou B, Q pour Quitter\n";
        std::cin >> UserAnswer;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (UserAnswer) {
        case 'A':
        case 'a':
            TestA();
            break;

        case 'B':
        case 'b':
            TestB();
            break;

        case 'Q':
        case 'q':
            std::cout << "Quitter...\n";
            break;

        default:
            std::cout << "Choix invalide!\n";
        }

    } while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

    return 0;
}

void TestA() {
    int ValA;
    short i;

    std::cout << "TestA: entrez un nombre entre 1 et 9\n";
    std::cin >> ValA;

    if (ValA > 9) {
        ValA = 9;
        std::cout << "TestA: ValA limitee a 9\n";
    }
    if (ValA == 0) {
        ValA = 1;
        std::cout << "TestA: ValA forcee a 1\n";
    }
    if (ValA > 0) {
        std::cout << ValA << " ";
        for (i = 0; i < ValA; i++) {
            std::cout << "*";
        }
        std::cout << std::endl; // saut de ligne
    }
    else {
        std::cout << "TestA: ValA est negatif!\n";
    }
}

void TestB() {
    int ValB;
    short i;
    short ValB1;
    double ValB2;

    std::cout << "TestB: entrez une valeur entre 0 et 9\n";
    std::cin >> ValB;

    if (ValB >= 0 && ValB <= 9) {
        for (i = 0; i < ValB; i++) {
            ValB1 = 100 + (10 * i);
            ValB2 = ValB1 / 10000.0;
            std::cout << "TestB: i= " << i
                << " ValB1 = " << ValB1
                << " ValB2 = " << std::fixed << std::setprecision(6) << ValB2
                << std::endl;
        }
    }
    else {
        std::cout << "TestB: ValB n'est pas entre 0 et 9!\n";
    }
}
