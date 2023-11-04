#include<iostream>
using namespace std;
 int fctPaire(int n){
     if (n%2==0){
         cout<<"il est pair"<<endl;
         return 2;
     }
          return 0;



 } 

  int fctMultiple3(int n){
      if(n%3==0){
          cout<<"il est multiple de 3"<<endl;
          return 3;
      }else{
          return 0;
      }


    }


   int main(){
       int n,a,b;
       cout<<"Donner un entier";
       cin>>n; 

       a=fctPaire(n);
       b=fctMultiple3(n);
       if (a==2 && b==3){
          cout<<"il est devisible par 6";
      }
   }