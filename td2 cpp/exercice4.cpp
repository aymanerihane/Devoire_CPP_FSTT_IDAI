
 //exercice4
#include<iostream>
using namespace std;
 

int main(){
    int taille,i;
    cout << "entrer la taille du tableau";
    cin >> taille;
    int* table = new int[taille] ;
    int* tableqrt = new int[taille] ;
    for(i=0;i<taille;i++){
       cout<<"saisir case "<<i+1<<": ";
       cin>>table[i];
    }
    for(i=0;i<taille;i++){
       tableqrt[i]=(table[i]*table[i]);
    }
    delete[] table;
    for(i=0;i<taille;i++){
        cout << "le carre de la case " << i+1 <<"est : "<<tableqrt[i]<<endl;
    }
    delete[] tableqrt;

} 