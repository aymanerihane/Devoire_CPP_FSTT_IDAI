#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <iterator>

using namespace std;


//Question 2:
 bool search(int search,set<int> mySet){
     if(mySet.find(search)!=mySet.end()){
         return true;
     }
     return false;
}



//Question 3:
bool searchByIterator(int search,set<int>::iterator debut,set<int>::iterator fin){
    for(debut;debut!=fin;debut++){
        if(search == *debut){

            return true;
        }
    }
    return false;
}


// Qestion 4:
template<class A, class B> bool searchByTemplate(B search, A debut, A fin){
    for(debut;debut!=fin;debut++){
        if(search == *debut){
            return true;
        }
    }
    return false;
}

void display(set<int> mySet){
    set<int>::iterator debut=mySet.begin();
    set<int>::iterator fin=mySet.end();
    for(debut;debut!=fin;debut++){
        cout<<'\t'<<*debut;
    }
}



int main(){
    set<int> mySet;
    vector<string> vect;
    list<int> list;
    int nbr,T[101];
    string str;

    //ajouter les valeur de 0 a 100
    for (int i=0; i<=100; i++){
        mySet.insert(i);
        list.push_back(i);
        vect.push_back(to_string(i));//remplisage du vecteur
        T[i]=i;//remplisage du tableau:
    }

    //demande du element a rechercher
    cout<<"entrer l'element a rechercher :";
    cin>> nbr;
    


    // Question 2: 
    cout<<"search normal:"<<endl;
    if(search(nbr,mySet)==true)
        cout<<"l'element existe"<<endl;
    else
        cout<<"l'element n'existe pas"<<endl;



    //Question 3:
    cout<<"search BY Iterator en parrametre:"<<endl;
    if(searchByIterator(nbr,mySet.begin(),mySet.end())==true)
        cout<<"l'element existe"<<endl;
    else
        cout<<"l'element n'existe pas"<<endl;



    // Question 4:
    cout<<"search BY Template:"<<endl;
    if(searchByTemplate(nbr,mySet.begin(),mySet.end())==true)
        cout<<"l'element existe"<<endl;
    else
        cout<<"l'element n'existe pas"<<endl;




    // Donner un exemple d'appel sur : un vecteur de string, une liste d'entiers, un tableau 'classique' de float.
    
//Pour vector:


    cout<<"entrer la chaine de caractere rechercher dans le vecteur :";
    cin>> str;
    if(searchByTemplate(str, vect.begin(), vect.end() ) == true)
        cout<<"l'element existe"<<endl;
    else
        cout<<"l'element n'existe pas"<<endl;
//list:
    cout<<"entrer la chaine de caractere rechercher ans la liste :";
    cin>> nbr;
    if(searchByTemplate(nbr, list.begin(), list.end() ) == true)
        cout<<"l'element existe"<<endl;
    else
        cout<<"l'element n'existe pas"<<endl;


//tableau classique:
    
    
    cout<<"entrer le nombre a rechercher dans le tableaux classique:";
    cin>> nbr;
    if(searchByTemplate(nbr,T,T+sizeof(T)/sizeof(T[0])))
        cout<<"l'element existe"<<endl;
    else
        cout<<"l'element n'existe pas"<<endl;

    return 0;
}