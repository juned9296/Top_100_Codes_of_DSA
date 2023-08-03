#include <iostream>
using namespace std;

int main()
{
    system("clear");

    int a[10], i, min, minIndex;

    for (i = 0; i < 10; i++)
    {
        cout << "\nEnter The Number: ";
        cin >> a[i];
    }

    min = a[0];
    minIndex = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }

    cout << "\n Min Number is " << min << " at index " << minIndex << endl;

    return 0;
}
