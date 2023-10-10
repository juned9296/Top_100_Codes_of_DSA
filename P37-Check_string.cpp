// Q- Write An If Statement That Checks if String is Empty ? 

#include <iostream>
using namespace std;

int main() {
    char string[] = " Hello ";
    bool isEmpty = true;

    for (int i = 0; string[i] != '\0'; i++) {
        isEmpty = false;
        break;
    }

    if (isEmpty) {
        cout << "String is empty." << endl;
    } else {
        cout << "String is not empty." << endl;
    }

    return 0;
}
