#include <iostream>
using namespace std ;
main() {
    int n;
    float s;
    cout << "entrer n:  ";
    cin >> n;
    for(int i=1; i<=n ; i++){
        s +=(float) 1/i;
    }
    cout << "la somme est:"<<s;
}
