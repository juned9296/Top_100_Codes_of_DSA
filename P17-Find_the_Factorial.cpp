#include <iostream>
using namespace std;

//  ◾️ Program 17  ⇢ Find The Factorial of Given Number  ⇠ ◾️

int main()
{

    system("clear");

    unsigned int num, fact = 1;
    cout << " Enter The Number ";
    cin >> num;

    if (num <= 0)
    {
        cout << " Factorial Not Possible ";
    }
    else
    {
        for (int i = 1; i <= num; i++)
            fact = fact * i;
        cout << " Factorial  of ⇢ " << num << " is ⇢ " << fact;
    }
    return 0;
}
