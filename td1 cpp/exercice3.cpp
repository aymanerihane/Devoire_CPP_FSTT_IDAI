#include <iostream>
using namespace std;

int main() {
  int n = 5, p = 9 ;
  int q ;
  float x ;
  q = n < p;
  cout << q << "\n";
  q = n == p;
  cout << q << "\n";
  q = p % n + p > n ;
  cout << q << "\n" ;
  x = (float) p / n;
  cout << x << "\n";
  x= (p + 0.5) / n;
  cout << x << "\n" ;
  x = (int) (p + 0.5) / n; /* !!!!*/
  cout << x << "\n";
  q = n * (p > n ? n : p) ;
  cout << q << "\n";
  q = n * (p < n ? n : p) ; 
  cout << q << "\n";
 
  return 0;
}



