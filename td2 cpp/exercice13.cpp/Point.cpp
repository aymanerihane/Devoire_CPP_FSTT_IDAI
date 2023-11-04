#include "Point.h"
#include<iostream>
using namespace std;

 Point::Point(float x,float y){
    this->x=x;
    this->y=y;
}
void Point::deplace(float x,float y){
    this->x+=x;
    this->y+=y;
    
}
void Point::afficher(){
    cout << "la position actuel de ce point est: ("<<x<<","<<y<<") \n";
}
