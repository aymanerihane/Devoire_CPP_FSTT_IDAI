#ifndef VECT_H
#define VECT_H

class vect
{ protected : // en prévision d'une éventuelle classe dérivée
int nelem ; // nombre d'éléments
int * adr ; // adresse zone dynamique contenant les éléments
public :
vect (int) ; // constructeur
~vect () ; // destructeur
int & operator [] (int) ; // accès à un élément par son "indice"
} ;

#endif //VECT_H