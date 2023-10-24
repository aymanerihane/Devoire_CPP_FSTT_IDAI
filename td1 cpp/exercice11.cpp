#include <iostream>
using namespace std ;
main() {
    int res,l,etoi=1;
    
    cout << "nombre des ligne:  ";
    cin >> l;
    for(int i=0; i<l ; i++){
        res=etoi;
        for(int k=0; k<l-i ; k++){
            cout << " ";
        }
        for(int j=0; j<2*i+1 ; j++){
            cout << "*";
        }
        cout << "\n";
    }
    
}
