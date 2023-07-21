#include <iostream>
using namespace std;

//  ◾️ Program 23  ⇢  Find the Perfect number which is given by user  ⇠ ◾️ 

int main()
{

    system("clear");

    int num, sum = 0;
    cout << "\n Enter the Any Number ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << num << " is a perfect number";
    }
    else
    {
        cout << num << " is not a perfect number";
    }
    return 0;
}
