#ifndef POINT_H
#define POINT_H
class Point {
private :
    double x,y; 
public :
    Point (float x,float y);
    void deplace(float x, float y);
    void afficher();
};
#endif