// 1. 1010 (long)
// 2. 7.5 (float)
// 3. 10 (int)
// 4. 7.5 (float)

#include<iostream>
using namespace std;

int main(){
    char c = '\x05' ; 
    int n = 5 ; 
    long p = 1000 ; 
    float x = 1.25 ; 
    double z = 5.5 ; 
   cout << n + c + p <<endl ;        /* 1 */ 
   cout<< 2 * x + c <<endl;          /* 2 */
   cout<< (char) n + c<<endl;        /* 3 */ 
   cout<<(float) z + n / 2<<endl;    /* 4 */
return 0;
}