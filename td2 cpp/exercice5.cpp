//exercice5

#include<iostream>
using namespace std;
 

int main(){
    
    int a;
    int &ref_a=a;
    int* p_a=&ref_a;
    cout<<"la valeur de a est : "<<a<<"sa adresse est: "<<&a<<endl;
    cout<<"la valeur de a est : "<<ref_a<<"sa adresse est: "<<&ref_a<<endl;
    cout<<"l'adresse du pointeur p_a est: "<<p_a<<"la valeur pointee est: " << *p_a<<endl;

   
}