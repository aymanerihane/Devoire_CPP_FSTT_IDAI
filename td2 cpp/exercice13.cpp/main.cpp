#include "Point.h"
#include<iostream>
using namespace std;
int main() {
    double x,y,dx,dy;
    cout<<"Saisir les cordonnes du point : ";
    cin>>x>>y;
    Point monpoint(x,y);
    monpoint.afficher();
    cout<<"Saisir les cordonnes du deplacement : ";
    cin>>dx>>dy;
    monpoint.deplace(dx,dy);
    monpoint.afficher();
    return 0;
}