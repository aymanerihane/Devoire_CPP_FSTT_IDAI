#include <iostream>
using namespace std;

class Nbrcomplexe{
    private:
        float reel,img;
    public:
        Nbrcomplexe(){}
        Nbrcomplexe(float reel, float img):reel(reel),img(img){}
        void operator==(Nbrcomplexe nbr){
            if(reel==nbr.reel && img==nbr.img)
                cout<<"les 2 nombre sont egaux"<<endl;
            else
                cout<<"les 2 nombre ne sont pas egaux"<<endl;
        }
        void operator+(Nbrcomplexe nbr){
            float resultReel= reel + nbr.reel;
            float resultImg= img + nbr.img;
            cout<<"("<<reel<<"+"<<img<<"i)"<< " + ("<< nbr.reel <<"+"<<nbr.img<<"i)"<<" = " <<resultReel<<" + "<<resultImg<<"i"<<endl;
        }
        void operator-(Nbrcomplexe nbr){
            float resultReel= reel - nbr.reel;
            float resultImg= img  - nbr.img;
            cout<<"("<<reel<<"+"<<img<<"i)"<< " - ("<< nbr.reel <<"+"<<nbr.img<<"i)"<<" = " <<resultReel<<" + "<<resultImg<<"i"<<endl;
        }
        void operator^(Nbrcomplexe nbr){ //j'ai utilise ^ au lieu de * car le symbole* ne peut pas etre definie
            float resultReel= (reel*nbr.reel)-(img*nbr.img);
            float resultImg= (img*nbr.reel)+(reel*nbr.img);
            cout<<"("<<reel<<"+"<<img<<"i)"<< " * ("<< nbr.reel <<"+"<<nbr.img<<"i)"<<" = " <<resultReel<<" + "<<resultImg<<"i"<<endl;
        }
        void operator/(Nbrcomplexe nbr){
            float denominateur= nbr.reel*nbr.reel + nbr.img*nbr.img;
            float resultReel= ((reel*nbr.reel)+(img*nbr.img))/denominateur;
            float resultImg= ((reel*nbr.img)-(nbr.reel*img))/denominateur;
            cout<<"("<<reel<<"+"<<img<<"i)"<< " / ("<< nbr.reel <<"+"<<nbr.img<<"i)"<<" = " <<resultReel<<" + "<<resultImg<<"i"<<endl;
        }
        

        
};
void menu(Nbrcomplexe nbr1,Nbrcomplexe nbr2){//fonction pour demander l'opperation a excuter
        int com;
        cout <<"choisir une operation du menu suivant : \n 1.egalite \n 2.addition \n 3.soustraction \n 4.multiplication \n 5.division \n 0.exit" << endl;
        cin >> com;
        switch (com){
            case 1:
                nbr1==nbr2;
                menu(nbr1,nbr2);//redonner le menu jusqu'a que l'utilisateur entre la valeur 0
                break;
            case 2:
                nbr1+nbr2;
                menu(nbr1,nbr2);//redonner le menu jusqu'a que l'utilisateur entre la valeur 0
                break;
            case 3:
                nbr1-nbr2;
                menu(nbr1,nbr2);//redonner le menu jusqu'a que l'utilisateur entre la valeur 0
                break;
            case 4:
                nbr1^nbr2;
                menu(nbr1,nbr2);//redonner le menu jusqu'a que l'utilisateur entre la valeur 0
                break;
            case 5:
                nbr1/nbr2;
                menu(nbr1,nbr2);//redonner le menu jusqu'a que l'utilisateur entre la valeur 0
                break;
            case 6:
                exit(0);
                break;
        }
}

int main(){
    float rel1,img1,rel2,img2;

    cout << "entrer la valeur reel du nombre1 complexe: ";
    cin >> rel1;
    cout << "entrer la valeur imaginaire du nombre1 complexe: ";
    cin >> img1;
    cout << "entrer la valeur reel du nombre2 complexe: ";
    cin >> rel2;
    cout << "entrer la valeur imaginaire du nombre2 complexe: ";
    cin >> img2;
    Nbrcomplexe nbr1(rel1,img1);
    Nbrcomplexe nbr2(rel2,img2);
    
    menu(nbr1,nbr2);



    return 0;
}