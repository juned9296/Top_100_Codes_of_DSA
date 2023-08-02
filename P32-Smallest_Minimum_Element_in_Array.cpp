#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int a[10], i, minNumber;

    for (i = 0; i < 10; i++)
    {
        cout << "\nEnter The Number: ";
        cin >> a[i];
    }

    minNumber = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] < minNumber)
        {
            minNumber = a[i];
        }
    }
    cout << "\n Smallest Min Number is " << minNumber << endl;

    return 0;
}
