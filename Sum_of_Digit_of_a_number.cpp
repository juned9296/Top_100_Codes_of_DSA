#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int num, sum = 0;
    cout << " Enter The Number ";
    cin >> num;

    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    cout << "\n sum of digit is " << sum ;
    return 0;
}
