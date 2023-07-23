#include <iostream>
using namespace std;

//  ◾️ Program 25  ⇢  Find the AutoMorphic Number   ⇠ ◾️

int isAutomorphic(int n)
{

    int square = n * n;

    while (n != 0)
    {
        if (n % 10 != square % 10)
        {
            return 0;
        }
        n = n / 10;
        square = square / 10;
    }
    return 1;
}

int main()
{
    system("clear");
    int number;
    cout << " Enter the number ";
    cin >> number;

    if (isAutomorphic(number))
    {

        cout << " The Number is Automprphic ";
    }
    else
    {
        cout << " The Number is  Not Automprphic ";
    }
}
