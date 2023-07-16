#include <iostream>
using namespace std;

    // ◾️ Program 1 ⇢ check whether a number is positive or negative ◾️

int main()
{
    int num;
    system("clear");

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The Number is Positive" << endl;
    }
    else if (num < 0)
    {
        cout << "The Number is Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    return 0;
}
