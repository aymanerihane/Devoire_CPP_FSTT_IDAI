#include <iostream>

using namespace std;

struct Element {
    public:
        int nombre;
        Element* next;
    
        Element (int nombre):nombre(nombre),next(nullptr){}
    
};

class Liste{
private:
    Element* head;

public:
    Liste():head(nullptr){}

    void ajouter(int num){
        Element* newnum=new Element(num);
        newnum->nombre= num;
        newnum->next=head;
        head=newnum;
    }
    void supprimer(){
        if(head!=nullptr){
            Element* supprimer=head;
            head=supprimer->next;
            delete supprimer;
        }
    }
    void afficher(){
        Element* actuel=head;
        cout << actuel<< " ";
        actuel=actuel->next;
    }
};

int main() {
    Liste maListe;

    maListe.ajouter(3);
    maListe.ajouter(2);
    maListe.ajouter(1);

    cout << "Liste : ";
    maListe.afficher();

    maListe.supprimer();

    cout << "Liste après suppression : ";
    maListe.afficher();

    return 0;
}