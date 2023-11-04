#include <iostream>
#include <list>
#include <iterator>
using namespace std;

struct Personne{
    string nom;
    string prenom;
    int age;
};


bool compare(Personne pers1, Personne pers2){
            if(pers1.nom==pers2.nom){
                return pers1.prenom<pers2.prenom;
            }
            return pers1.nom < pers2.nom;
        }

class Trie{
    private:
        list<Personne> lst;
        Personne pers;
    public:
        void add(string nom,string prenom,int age){
            
            pers.nom=nom;
            pers.prenom=prenom;
            pers.age=age;

            lst.push_back(pers);
        }

        void trie(){
            lst.sort(compare);
        }

        void display(){
            for(Personne pers : lst){
                cout<<"le nom du personne est :"<<pers.nom<<" 2son prenom est:"<<pers.prenom<<" son ages est: "<<pers.age<<"ans"<<endl;
            }
            cout<<endl;
        }

};


int main(){
    Trie trie;
    Personne pers1;
    string nom, prenom;
    int nbrPers,age;
   cout<<"entrer combien des personnes vous voulez saisir leur information: \t";
   cin>> nbrPers;
   for(int i=0; i<nbrPers;i++){
    cout<<"entrer le nom du personne numero: "<<i+1<<"\t"<<endl;
    cin>>nom;
    cout<<"entrer le prenom du personne numero: "<<i+1<<"\t"<<endl;
    cin>>prenom;
    cout<<"entrer l'age du personne numero: "<<i+1<<"\t"<<endl;
    cin>>age;
    trie.add(nom,prenom,age);
   }
   trie.display();
   trie.trie();
   cout<<"apres le trie:"<<endl;
   trie.display();
    
    return 0;
}