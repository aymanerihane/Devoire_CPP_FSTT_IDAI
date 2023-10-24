#include<iostream>
using namespace std;
int i=0;

void fonc(){
    i++;
    cout<< "le nombre total d'appel est : "<<i<<endl;

}
int main(){

    fonc();
    fonc();
    fonc();
    return 0;
}