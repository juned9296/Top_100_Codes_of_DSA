#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Entere A Number  : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of N Natural Numbers is : " <<sum;
}