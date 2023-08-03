#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int a[10], i, max, maxIndex;

    for (i = 0; i < 10; i++)
    {
        cout << "\nEnter The Number: ";
        cin >> a[i];
    }

    max = a[0];
    maxIndex = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;
        }
    }

    cout << "\nMax Number is " << max << " at index " << maxIndex << endl;

    return 0;
}
