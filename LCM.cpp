#include <iostream>
using namespace std;

int main()
{

    system("clear");

    int num1, num2, lcm;
    cout << " Enter The First Number ";
    cin >> num1;

    cout << " Enter the Second Number ";
    cin >> num2;

    int max = (num1 > num2) ? num1 : num2;

    for (int i = max; i <= num1 * num2; i++)
    {
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    cout<< " The LCM of " <<num1<< " and "<<num2<<" is "<<lcm;
}