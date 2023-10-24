//exercice9

#include<iostream>
using namespace std;
 
class Animal{
    private:
        string nom;
        int age;
    public:
        string lieu;
        void set_value(int age, string nom){
            this->age=age;
            this->nom=nom;
        }
        int get_age(){
            return age;
        }
        string get_nom(){
            return nom;
        }

};
class Zebra : public Animal{
    private:
        string origine;
    public:
        void set_orig(string origine){
            this->origine=origine;
        }
        void affichage(){
            cout << "le nom du cette zebra est :"<< get_nom()<< " l'age du cette zebra est :"<< get_age() << " et sans origine est :"<<origine<<endl;
        }
    
};
class Dolphin : public Animal{
    private:
        int numcage;
    public:
    void set_numcage(int numcage){
        this->numcage=numcage;
    }
        void affichage(){
            cout << "le nom du ce dolphin est :"<< get_nom()<< " l'age du ce dolphin est :"<< get_age() << " et sans numero de cage est :"<<numcage<<endl;
        }
};



int main(){
    int dpage,zbage,dpnumcage;
    string dpnom,zbnom,zborig;

    Zebra zebra;
    Dolphin dolphin;
    cout <<"entrer le nom du zebra ";
    cin >> zbnom;
    cout<<"entrer l'age du zebra ";
    cin >> zbage;
    cout<<"entrer l'origine du zebra ";
    cin >> zborig;
    cout<<"entrer le nom du dolphin ";
    cin >> dpnom;
    cout<<"entrer l'age du dolphin ";
    cin >> dpage;
    cout<<"entrer le numero de cage du dolphin ";
    cin >> dpnumcage;


    zebra.set_value(zbage,zbnom);
    zebra.set_orig(zborig);
    dolphin.set_value(dpage,dpnom);
    dolphin.set_numcage(dpnumcage);
    
    zebra.affichage();
    dolphin.affichage();

   return 0;
}


   
