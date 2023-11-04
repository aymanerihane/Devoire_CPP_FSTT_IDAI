#include <iostream>
using namespace std;

class Test{
    public:
        static int tableau[] ;
    public :
        static int division(int indice, int diviseur){
            if((indice>=10 || indice<0) && diviseur==0)
                throw 1;
            if(diviseur==0)
                throw 2;
            if(indice>=10 || indice<0)
                throw 3;
            return tableau[indice]/diviseur;
        }
};


int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;

int main() {
    Test test;
    int x, y;
    cout << "Entrez l'indice de l'entier a diviser: " << endl;
    cin >> x ;
    cout << "Entrez le diviseur: " << endl;
    cin >> y ;
    cout << "Le resultat de la division est: "<< endl;
    try{
        int resultat = Test::division(x, y);
        cout << resultat << endl;
    }
    catch(int e){
        
        if(e==1){
            cerr << "Attempted to divide by zero" << endl;
            cerr << "Indice not valable" <<endl;
        }   
        if(e==2)
            cerr << "Attempted to divide by zero" << endl;
        if(e==3)
            cerr << "Indice not valable" <<endl;
    }
        
    return 0; 
}