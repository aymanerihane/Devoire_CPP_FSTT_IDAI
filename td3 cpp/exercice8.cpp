// Créer une Template de fonction permettant de calculer le carré d’une valeur de type quelconque (le
// résultat possédera le même type). Écrire un petit programme utilisant cette Template.

#include <iostream>
using namespace std;

template<class T> T carre (T nbr){
    return nbr*nbr;
}

int main(){

    int nbr1,result;
    float nbr2,res;
    cout << "entrer une valeure entier: ";
    cin>> nbr1;
    cout<<"le carre du nombre "<<nbr1<<" est : "<<carre(nbr1)<<endl;
    cout << "entrer une valeure float: ";
    cin>> nbr2;
    cout<<"le carre du nombre "<<nbr2<<" est : "<<carre(nbr2)<<endl;
    return 0;
}