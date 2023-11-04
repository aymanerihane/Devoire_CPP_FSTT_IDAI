#ifndef VECTOK_H
#define VECTOK_H
#include "vect.h"
class vectok : public vect
{
public:
//constructeur
   vectok(int);
   //constructeur par recopie
   vectok(vectok& autre);
   //destructeur
   ~vectok();
   //surdefintion d operateur d affectation
   vectok &operator=(vectok &autre);
   int taille();
};

#endif // VECTOK_H