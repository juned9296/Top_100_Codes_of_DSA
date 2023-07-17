#include <iostream>
using namespace std;

//  ◾️ Program 15  ⇢ Fibonacci Series upto Given Number  ⇠ ◾️

int main()
{
    system("clear");
    int n, x, y, z;
    cout << " Enter The Number ";
    cin >> n;

    x = 0;
    y = 1;

    for (z = 0; z <= n; z = x + y)
    {
        cout << " \n " << z;
        x = y;
        y = z;
    }

    return 0;
}
