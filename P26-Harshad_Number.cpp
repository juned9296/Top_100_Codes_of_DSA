#include <iostream>
using namespace std;

int main()
{

    system("clear");
    int num, temp, sum = 0;
    cout << " Enter The Number ";
    cin >> num;
    temp = num;

    while (num > 0)
    {

        sum = sum + (num % 10);
        num = num / 10;
    }

    if (temp % sum == 0)
    {
        cout << temp << " is Harshad Number "<<endl;
    }
    else
    {
        cout << temp << " is Not Harshad Number "<<endl;
    }
    return 0;
}
