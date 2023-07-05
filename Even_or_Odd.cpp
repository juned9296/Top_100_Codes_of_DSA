#include <iostream>
using namespace std;

int main()
{
    int number;
    system("clear");
    cout << "Enter The Numbe ~~";
    cin >> number;
    //  Condition
    if (number % 2 == 0)
    {
        cout << number << " : Even";
    }
    else
    {
        cout << number << " : Odd";
    }

    return 0;
}

 