#include <iostream>


class vect
{ 
    protected : // en prévision d'une éventuelle classe dérivée
        int nelem ; // nombre d'éléments
        int * adr ; // adresse zone dynamique contenant les éléments
    public :
        // constructeur
        vect (int nbr) {
            
        }
         // destructeur
        ~vect () {
            
        }
        // accès à un élément par son "indice"
        int & operator [] (int indice) {
            return adr[indice];
        }
} ;
class vectok : public vect{
    private:
    public:

        voir operator=(vectok vectok){
            
        }
};
