//exercice3_b

#include<iostream>
using namespace std;
 

int main(){
    int table[10],i;
    int* pmax=table;
    int* pmin=table;
    int max=0,min;
    for(i=0;i<10;i++){
       cout<<"saisir case "<<i+1<<": ";
       cin>>table[i];
    }
    min = pmin[0];
    for(i=0;i<10;i++){
        if(max < pmax[i]){
            max = pmax[i];
          
        }
        if(min > pmin[i]){
            min = pmin[i];
          
        }}
        cout<<"la valeur max est : "<<max<<" sa position est "<<&pmax<<endl;
        cout<<"la valeur min est : "<<min <<" sa position est "<<&pmin<<endl;
        return 0;
}