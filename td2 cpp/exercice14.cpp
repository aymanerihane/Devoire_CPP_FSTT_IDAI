
#include <iostream>
#include <vector> //j'ai utiliser cette structure pour fasiliter la tach
using namespace std;

class Pile {
    private:
        vector<int> nombre; 
    public:
        Pile (){
        }
        void push(int a){
            nombre.push_back(a); //entrer la nouvelle valeur au debut du pile
        }
        void pop(){
            if(! nombre.empty()){
                cout << "le numero supprimer est : "<<nombre.back() <<endl;
                nombre.pop_back(); //supprimer le premier nombre de la pile
            }
            else{
                cout<< "la pile est vide";
                exit(0);
            }
        }
        void afficher(){
            cout << nombre.back() <<endl; //j'affiche le premier nombre de la pile
        }
};


int main() {
    Pile p1;
    Pile p2;
    p1.push(12);
    p1.push(43);
    p1.push(643);


    p2.push(74);
    p2.push(74);
    p2.push(23);

    p1.afficher();
    p2.afficher();

    p1.pop();
    p2.pop();

    p1.afficher();
    p2.afficher();

    return 0;
}