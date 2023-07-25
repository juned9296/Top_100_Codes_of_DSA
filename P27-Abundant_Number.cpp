#include <iostream>
using namespace std;

int main()
{

    system("Clear");
    int num, sum = 0;
    cout << " Enter the Number ";
    cin >> num;
    int temp = num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum > num)
    {
        cout << temp << "  is Abundant Number ";
    }
    else
    {
        cout << temp << "  is Not Abundant Number ";
    }
}