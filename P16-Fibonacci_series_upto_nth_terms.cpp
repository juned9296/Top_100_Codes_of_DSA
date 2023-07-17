#include <iostream>
using namespace std;

//  ◾️ Program 16  ⇢ Fibonacci Series Upto nth terms ⇠ ◾️

int main()
{
    system(" clear ");
    int n, x, y, z, count;
    cout << " Enter The Number of the terms ";
    cin >> n;
    x = 0;
    y = 1;
    z = 0;
    for (count = 1; count <= n; count = count + 1)
    {
        cout << " \n " << z;
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
}
