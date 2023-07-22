#include <iostream>
using namespace std;

//  ◾️ Program 24  ⇢  Find the Perfect Square   ⇠ ◾️

bool isPerfectSquare(int num);

int main()
{

    system("clear");

    long long int num;
    cout << " Enter Any Number ";
    cin >> num;
    int temp = num;

    if (num == 0 || isPerfectSquare(num))
    {
        cout << temp << " Is A perfect Square ";
    }
    else
    {
        cout << temp << " Is Not A perfect Square ";
    }
    return 0;
}

bool isPerfectSquare(int num)
{
    for (int i = 1; i * i <= num; i++)
    {
        if ((num % i == 0) && (num / i == i))
        {
            return true;
        }
    }
    return false;
}


