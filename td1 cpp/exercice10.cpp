#include <iostream>
using namespace std ;
int fub(int n){
    int un;
    if(n<2){
        un=1;
    }else {
         un = fub(n-1)+ fub(n-2);
    }
    return un;
}
main() {
    int n , un;
    cout << "entrer n:  ";
    cin >> n;
    un=fub(n);
    cout << "Un = "<< un;
}
