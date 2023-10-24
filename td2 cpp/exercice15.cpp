#include <iostream>
#include <cstring>

using namespace std;


class Fichier {
   private:
    char* P;
    size_t longueur;  
    
   public:
    Fichier(size_t longueur){
        this->longueur=longueur;
        P=new char[longueur];
    }
    ~Fichier(){
        delete[] P;
    }
    void Creation(size_t longueur){
        if(P)
            delete []P;
        this->longueur=longueur;
        P= new char[longueur];
    }
    void Remplit(){
        if(P){
            cin.getline(P, longueur);
        }else
            cout<< "error";
            exit(0);
            
    }
    void Affiche(){
        if (P == nullptr) 
            cout << "Erreur " <<endl;
        for (size_t i = 0; i < longueur; i++) {
            cout << P[i];
        }
    }
    
};


int main() {
    size_t longueur = 10;  //en octect

    
    Fichier* fichier = new Fichier(longueur);
    
    fichier->Creation(longueur);
    fichier->Remplit();
    fichier->Affiche();

    
    delete fichier;

    return 0;
}