#include <iostream>
using namespace std;

  // ◾️ Program 8 ⇢ Find the Prime Number Program  ◾️

int main()
{
    system(" clear ");
    int num;
    int j = 0, count = 0;

    cout << " Enter the Number ";
    cin >> num;

    // checking the number of divisors b/w 1 and the number n
    for (int j = 1; j < num + 1; j++)
    {
        if (num % j == 0)
            count += 1;
    } // if the number of divisors are > 2 then its not prime else its prime
    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1)
    {
        cout << "The given is number " << num << " is not prime";
    }
    else if (count > 2)
    {
        cout << "The given number " << num << " is not prime";
    }
    else
    {
        cout << "The given number " << num << " is prime";
    }
    return 0;
}
