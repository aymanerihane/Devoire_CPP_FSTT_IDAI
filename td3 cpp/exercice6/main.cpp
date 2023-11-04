
#include "vectok.h";
#include <iostream>
using namespace std;

int main()
{
    vectok vecteur(5);
    
    for (int i = 0; i < 5; i++) {
        vecteur[i] = i * 2;
    }

    // Copie du vecteur
    vectok copie(vecteur);

    // Utilisation de l'opérateur d'affectation
    vectok autre(3);
    autre = copie;

    // Affichage de la taille du vecteur
  cout << "Taille du vecteur : " << autre.taille() << std::endl;

    // Affichage des éléments du vecteur
    for (int i = 0; i < autre.taille(); i++) {
    cout << "Element " << i << ": " << autre[i] << std::endl;
    }

    return 0;
}
