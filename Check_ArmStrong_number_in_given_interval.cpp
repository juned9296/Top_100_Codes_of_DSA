
#include <iostream>
using namespace std;

 // ◾️ Program 14 ⇢ Find the Armstrong Numbers in a given Interval  ◾️

int main()
{
    system("clear");
    int n1, n2, num, sum, digit;

    cout << "Enter the Starting Number: ";
    cin >> n1;

    cout << "Enter the Ending Number: ";
    cin >> n2;

    cout << "Armstrong Numbers between " << n1 << " and " << n2 << " are:\n";

    for (int i = n1; i <= n2; i++)
    {
        num = i;
        sum = 0;

        int numOfDigits = 0;
        int temp = i;
        while (temp != 0)
        {
            temp /= 10;
            numOfDigits++;
        }

        while (num > 0)
        {
            digit = num % 10;
            sum += pow(digit, numOfDigits);
            num /= 10;
        }

        if (sum == i)
        {
            cout << i << endl;
        } 
    }

    return 0;
}
