#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string dateHeure(string dateH){
    cout << "Entrez la date et l'heure (JJMMAAAAHHNN) : ";
    cin >> dateH;

    if (dateH.length() != 12) {
        cout << "Format de date et d'heure invalide. Assurez-vous d'utiliser JJMMAAAAHHNN." << endl;
        exit(0);
    }
    return dateH;
}
int main() {

    string dateH;
    

    cout << "Entrez la date et l'heure (JJMMAAAAHHNN) : ";
    cin >> dateH;

    dateH=dateHeure(dateH);

    string jour = dateH.substr(0, 2);
    string mois = dateH.substr(2, 2);
    string annee = dateH.substr(4, 4);
    string heure = dateH.substr(8, 2);
    string minute = dateH.substr(10, 2);
    
    int n=stoi(mois);
    

     switch (n)
     {
     case 1:
     cout<<jour<<"er Janvier "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 2:
     cout<<jour<<"eme Fevrier "<<annee<<" a "<<heure<<"h"<<minute;
         break; 
     case 3:
     cout<<jour<<"eme Mars "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 4:
     cout<<jour<<"eme Avril "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 5:
     cout<<jour<<"eme Mai "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 6:
     cout<<jour<<"eme Juin "<<annee<<"a "<<heure<<"h"<<minute;
         break;
     case 7:
     cout<<jour<<"eme Juillet "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 8:
     cout<<jour<<"eme Aout "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 9:
     cout<<jour<<"eme Septembre "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 10:
     cout<<jour<<"eme Octobre "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 11:
     cout<<jour<<"eme novembre "<<annee<<" a "<<heure<<"h"<<minute;
         break;
     case 12:
     cout<<jour<<"eme Decembre "<<annee<<" a "<<heure<<"h"<<minute;
         break;                                        
    
     default:
         break;
     }

    return 0;
}
