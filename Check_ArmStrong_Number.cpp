#include <iostream>
using namespace std;

 // ◾️ Program 13 ⇢ Find the Armstrong Numbers from 1 to 999    ◾️

int main()
{
    system("clear");
    int num, sum = 0, org;
    cout << " Enter the Number ";
    cin >> num;
    org = num;

    while (num > 0)
    {
        sum = sum + (num % 10) * (num % 10) * (num % 10);
        num = num / 10;
    };
    if (sum == org)
    {
        cout << org << " is Armstrong ";
    }
    else
    {
        cout << org << " is not Armstrong ";
    }
    return 0;
}
