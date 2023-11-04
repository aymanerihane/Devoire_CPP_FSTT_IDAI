#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class Trie{
    private:
        list<int> lst;
        
    public:
        void triABull(){
            list<int>::iterator ptr1 = lst.begin();
            list<int>::iterator ptr2 = ptr1;
            list<int>::iterator end = lst.end();
            for(ptr1;ptr1 !=end; ptr1++){
                for(ptr2++;ptr2 !=end; ptr2++){
                    if(*ptr1<*ptr2){
                        *ptr1 = * ptr1^ *ptr2;
                        *ptr2 = * ptr1^ *ptr2;
                        *ptr1 = * ptr1^ *ptr2;
                    }

                }
            }
        }
        void triSelection(){
            list<int>::iterator ptr1 = lst.begin();
            list<int>::iterator ptr2;
            list<int>::iterator end = lst.end();
            
            for(ptr1;ptr1 !=end; ptr1++){
                list<int>::iterator min= ptr1;
                ptr2=ptr1;
                ptr2++;
                for(ptr2;ptr2 !=end; ptr2++){
                    if(*min>*ptr2){
                        min= ptr2;
                    }

                }
                if (min != ptr1) {
                    swap(*ptr1,*min);
                }
            }
        }

        void triParIns(){
            list<int>::iterator ptr1 = lst.begin();
            list<int>::iterator ptr2;
            list<int>::iterator end = lst.end();
            
            for(ptr1;ptr1 !=end; ptr1++){
                ptr2=ptr1;
                while(ptr2 != lst.begin() && *(prev(ptr2)) > *ptr2){
                    swap(*(prev(ptr2)),*ptr2);
                    ptr2--;
                }
            }
        }


        void add(int nbr){
            lst.push_back(nbr);
        }
        void display(){
            list<int> :: iterator ptr=lst.begin();
            list<int> :: iterator end=lst.end();
            for(ptr;ptr !=end;ptr ++){
                cout<<'\t'<<*ptr;
            }
            cout<<endl;
        }



};

int main(){
    Trie trie;
    trie.add(3);
    trie.add(5);
    trie.add(2);
    trie.add(8);
    trie.add(5);
    trie.add(8);
    trie.add(0);
    //display du liste original:
    cout<<"la list avant le trie: "<<endl;
    trie.display();
    cout<<endl;
    trie.triParIns();
     cout<<"la list apres le trie par insertion: "<<endl;
    trie.display();

    //trie par selection:
    
    trie.triParIns();
     cout<<"la list apres le trie par selection: "<<endl;
    trie.display();

    //trie a bull:
    
    trie.triParIns();
     cout<<"la list apres le trie a bull: "<<endl;
    trie.display();
    
    
    return 0;
}