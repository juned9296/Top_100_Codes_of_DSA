#include <iostream>
using namespace std;

 // ◾️ Program 1 ⇢ Check Whether a Number is Even or Odd ◾️

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

 
