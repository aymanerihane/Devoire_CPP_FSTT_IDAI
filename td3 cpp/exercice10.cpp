#include <iostream>
using namespace std;

class erreur
{ public :
    int num ;
} ;
class A{ 
    public :
        A(int n){ 
            if (n==1) { 
                erreur er ;
                er.num = 999 ; 
                throw er ; 
            }
        }
} ;

main(){ 
    void f() ;
    try{ 
        f() ;
    }
    catch (erreur er){ 
        cout << "dans main : " << er.num << "\n" ;//dans main : 999
    }
    cout << "suite main\n" ;// suite main
    }
void f(){ 
    try{   
        A a(1) ;//
    }
    catch (erreur er){ 
        cout << "dans f : " << er.num << "\n" ;//dans f:999
    }
}

//reponse:
    /*
    dans f : 999
    suite main

    la ligne "dans main : 999"n'est pas afficher car la fonction f ne retourn pas des erreurs d'ou le programme va inoger le catch
    */
