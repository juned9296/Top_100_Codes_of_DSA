#include <iostream>
using namespace std;

//  ◾️ Program 22  ⇢  Find the Strong number which is given by user  ⇠ ◾️

int main()
{

    system("clear");
    int num, rem, fact, temp, sum = 0;
    cout << " Enter The Number  " ;
    cin >> num;
    temp = num;

    while (num > 0)
    {
        rem = num % 10;
        fact = 1;

        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if (temp == sum)
    {
        cout << temp << " is a Strong Number " ;
    }
    else
    {
        cout << temp << " is Not a Strong Number " ;
    }
    return 0;
}
