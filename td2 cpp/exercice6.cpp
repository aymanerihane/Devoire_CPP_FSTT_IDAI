//exercice6

#include<iostream>
using namespace std;
 void incrementer(int &a){ // passage par reference
    a++;
 }
 void permuter(int* a, int *b){ // passage par adresse
    *a=*a ^ *b;
    *b=*a ^ *b;
    *a =*a ^ *b;
    // on peut aussi utiliser *a ^= *b ^= *a ^= *b;
 }

int main(){
    
    int a,b;
    int &ref=a;
    cout<<"entrer la valeur de a : ";
    cin >> a;
    cout<<"entrer la valeur de b : ";
    cin >> b;
    incrementer(ref); // passage par reference
    cout <<"la valeur de a apres incrementation est: "<<a<<endl;
    permuter(&a,&b); // passage par adresse
    cout <<"la valeur de a apres permutation est: "<<a << " et la valeur de b apres permutation est: "<<b;

   
}