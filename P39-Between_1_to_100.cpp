// Q- Write A For Loop to Print Even Numbers between 1 to 100 ?
 

#include <iostream>
using namespace std;

int main() {

    system("clear");
    
    for (int i = 1; i < 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
