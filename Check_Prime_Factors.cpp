#include <iostream>
using namespace std;

//  ★ Program 19  ⇢ Find The Prime Factors of Given Number  ⇠ ★

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
        cout << n << " ";
}

// Driver code
int main()
{
    system("clear");
    int n ;
    cout<< " Enter The Number ";
    cin>>n;
    primeFactors(n);
    return 0;
}