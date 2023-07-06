#include <iostream>
using namespace std;

//   Find the Greatest of the Two Numbers
int main()
{
    system("clear");

    int Number1;
    cout << "\n Enter The First Number : ";
    cin >> Number1;

    int Number2;
    cout << "\n Enter The Second Number : ";
    cin >> Number2;

    if (Number1 == Number2)
    {
        cout << "\n Both Are Equal ";
    }
    else if (Number1 > Number2)
    {
        cout << Number1 << "  is greater than " << Number2;
    }
    else
    {
        cout << Number2 << " is greater than " << Number1;
    }
    return 0;
}