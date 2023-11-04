#include"vect.h"
//constructeur
vect::vect(int n){
    nelem=n;
    adr=new int[n];
}
//destructeur
vect::~vect(){
    delete[] adr;
}
//  operater pour accès à un élément par son "indice"
int &vect::operator[] (int index) {
    return adr[index];
}