// exercice12
#include <iostream>
using namespace std;

class Test{
    public:
        void call(){
            i++;
        }
        static int getcounter(){
            return i;
        }
    private:
        static int i;

};
int Test::i=0;


int main() {
    Test test;
    test.call();
    test.call();
    test.call();
    
    cout << Test::getcounter();

    return 0;
}