//exercice8

#include<iostream>
using namespace std;
 
class NbrComlexe{
    private:

    void egalite(int one_rel, int one_img,int two_rel ,int two_img){
        if(one_rel==two_rel && one_img==two_img)
            cout << "ils sont egale"<< endl;
        else
            cout << "ils ne sont pas egale" << endl;

    }
    void addition(int one_rel, int one_img,int two_rel ,int two_img){
        int somme_rel,somme_img;
        somme_rel=one_rel+two_rel;
        somme_img=one_img+two_img;
        cout << "la somme des parties reel egal= "<< somme_rel << " et la somme des parties imaginaires egale= "<< somme_img<<endl;

    }
    void soustraction(int one_rel, int one_img,int two_rel ,int two_img){
        int soustraction_rel,soustraction_img;
        soustraction_rel=one_rel-two_rel;
        soustraction_img=one_img-two_img;
        cout << "la soustraction des parties reel egal= "<< soustraction_rel << " et la soustraction des parties imaginaires egale= "<< soustraction_img<<endl;


    }
    void multiplication(int one_rel, int one_img,int two_rel ,int two_img){
        int multiplication_rel,multiplication_img;
        multiplication_rel=one_rel*two_rel;
        multiplication_img=one_img*two_img;
        cout << "la multiplication des parties reel egal= "<< multiplication_rel << " et la multiplication des parties imaginaires egale= "<< multiplication_img<<endl;


    }
    void devision(int one_rel, int one_img,int two_rel ,int two_img){
        int division_rel,division_img;
        division_rel=one_rel/two_rel;
        division_img=one_img/two_img;
        cout << "la division des parties reel egal= "<< division_rel << " et la division des parties imaginaires egale= "<< division_img<<endl;


    }
    public:
    void menu(int one_rel, int one_img,int two_rel ,int two_img){
        int com;
        cout <<"choisir une operation du menu suivant : \n 1.égalité \n 2.addition \n 3.soustraction \n 4.multiplication \n 5.division \n 0.exit" << endl;
        cin >> com;
        switch (com)
        {
        case 1:
            egalite(one_rel,one_img,two_rel ,two_img);
            menu(one_rel,one_img,two_rel ,two_img);
            break;
        case 2:
            addition(one_rel,one_img,two_rel ,two_img);
            menu(one_rel,one_img,two_rel ,two_img);
            break;
        case 3:
            soustraction(one_rel,one_img,two_rel ,two_img);
            menu(one_rel,one_img,two_rel ,two_img);
            break;
        case 4:
            multiplication(one_rel,one_img,two_rel ,two_img);
            menu(one_rel,one_img,two_rel ,two_img);
            break;
        case 5:
            devision(one_rel,one_img,two_rel ,two_img);
            menu(one_rel,one_img,two_rel ,two_img);
            break;
        case 0:
            break;
        
        default:
            menu(one_rel,one_img,two_rel ,two_img);
            menu(one_rel,one_img,two_rel ,two_img);
            break;
        }
    }
};



int main(){
    int rel1,img1,rel2,img2;
    NbrComlexe myobject;
    cout << "entrer la valeur reel du nombre1 complexe: ";
    cin >> rel1;
    cout << "entrer la valeur imaginaire du nombre1 complexe: ";
    cin >> img1;
    cout << "entrer la valeur reel du nombre2 complexe: ";
    cin >> rel2;
    cout << "entrer la valeur imaginaire du nombre2 complexe: ";
    cin >> img2;
    myobject.menu(rel1,img1,rel2,img2);
   
   return 0;
}


   
