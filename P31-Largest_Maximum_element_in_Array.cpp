#include <iostream>
using namespace std;

int main()
{   
    system("clear");
    
    int a[10], i, max;

    for (i = 0; i < 10; i++)
    {
        cout << "\nEnter The Number: ";
        cin >> a[i];
    }

    max = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "\n  Largest Max Number is " << max << endl;

    return 0;
}
