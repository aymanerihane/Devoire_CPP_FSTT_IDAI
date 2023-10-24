#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 10;

    cout << " X*Y  I";
    for (int j = 0; j <= MAX; j++) {
        cout << setw(6) << j;
    }
    cout << endl;


    cout << "----------------------------------------------------------------------------" << endl;


    for (int i = 0; i <= MAX; i++) {
        cout << setw(3) << i << "   I";

        for (int j = 0; j <= MAX; j++) {
            cout << setw(6) << i * j;
        }

        cout << endl;
    }

    return 0;
}
