#include "vectok.h"
//constructeur
 vectok::vectok(int n):vect(n){};
 //destructeur
 vectok::~vectok(){};
 //constructeur par recopie
 vectok::vectok(vectok& autre):vect(autre.nelem)
 {
for (int i = 0; i < nelem; i++)
{
    adr[i]=autre.adr[i];
}
 }
  
  vectok &vectok::operator=( vectok& autre){
    if (this==&autre)
    {
        return *this;
    }
    delete[] adr;

    nelem=autre.nelem;
    adr=new int[nelem];
    for(int i = 0; i < nelem; i++)
    {
        adr[i]=autre.adr[i];
    }
    return *this;
    
  }
  int vectok::taille(){
    return nelem;
  }
