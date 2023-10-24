//exercice7

#include<iostream>
using namespace std;
 

int main(){
   int i, j, tmp,size;

   cout << "entrer la taille du tableau";
   cin >> size;

   int* tab= new int[size]; //allocation dynamique du tableau
   
   for(i=0;i<size;i++){
       cout<<"saisir case "<<i+1<<": ";
       cin>>tab[i];
   } 


    //afficher les éléments du tableau
   for (i=0; i < size; ++i)
   {
      cout<<"    "<< tab[i];
   }
 
   //trie par bulles
  for (i=0 ; i < size-1; i++)
   {
    for (j=0 ; j < size-i-1; j++)
    {
      
      
      if (tab[j] > tab[j+1]) 
      {
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
      }
    }
   }
 
   cout <<"\n******* *******\n";
 
    //afficher les éléments du tableau triée
   for (i=0; i < size; ++i)
   {
      cout <<"    "<< tab[i];
   }
 
   return 0;
}


   
