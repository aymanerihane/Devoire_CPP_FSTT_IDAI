#include <iostream>
using namespace std;

template <class T> class point{ 
    T x, y ; // coordonnees
    public :
    point (T abs, T ord) { 
        x = abs ; y = ord ; 
    }
    void affiche () ;
} ; 

template <class T> void point<T>::affiche (){
    cout << "Coordonnees : " << static_cast<int>(x) << " " << static_cast<int>(y) << "\n" ;//j'ai utiliser la methode static_cast pour resoudre le problem du question 2
}

int main(){
    point <char> p (60, 65) ;// on a une valeur utiliser point<char> alors les parametre vont changer en char a l'aide du code ASCII
    p.affiche () ;// Coordonnees : < A    D'APRES LE CODE ASCII "60"->"<" ET "65"->"A"  

    return 0;
} 