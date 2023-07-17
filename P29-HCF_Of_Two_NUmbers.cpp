#include <iostream>
using namespace std;

//  ★ Program 29  ⇢ Find The HCF Of Two Number  ⇠ ★

int main()
{

    system("clear");

    int num1, num2, hcf = 1;
    cout << " Enter the  First Number ";
    cin >> num1;

    cout << " Enter The Second Number ";
    cin >> num2;

    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf;

    return 0;
}
