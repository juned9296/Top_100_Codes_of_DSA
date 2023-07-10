#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int num, reverse = 0;
    cout << " Enter the Number ";
    cin >> num;
    
    while (num > 0)
    {
        reverse = (reverse * 10) + num % 10;
        num = num / 10;
    }
    cout << " Number is Reversed " << reverse;
    return 0;
}