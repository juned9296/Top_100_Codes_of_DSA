#include <iostream>
using namespace std;

// ◾️ ⇢ Program 9 ⇢ Print Prime numbers in a given range ⇠ ◾️

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{   system("clear");
    int n1;
    cout << "\n Enter the starting Number ";
    cin >> n1;

    int n2;
    cout << " \n Enter the Ending Number ";
    cin >> n2;

    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            cout << i << "  " ;
        }
    }
    return 0;
}
