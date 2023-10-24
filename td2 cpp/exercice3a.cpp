#include<iostream>
using namespace std;
 

int main(){
    int table[10],i;
    int max=0,min,pmax,pmin;
    for(i=0;i<10;i++){
       cout<<"saisir case "<<i+1<<": ";
       cin>>table[i];
    }
    for(i=0;i<10;i++){
        if(max < table[i]){
            max=table[i];
            pmax=i;
        }
        min=table[0];
        if(min > table[i]){
            min = table[i];
            pmin=i;
        }}
        cout<<"la valeur max est : "<<max<<" sa position est "<<pmax<<endl;
        cout<<"la valeur min est : "<<min<<" sa position est "<<pmin<<endl;
        return 0;

}