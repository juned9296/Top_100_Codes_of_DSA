#include <iostream>
using namespace std;

 // ◾️ Program 4 ⇢ The sum of Natural Numbers from Given Interval ◾️
   
int main()
{
    system("clear");
    int minNumber;
    cout << " \n Enter The Min Number : ";
    cin >> minNumber;

    int maxNumber;
    cout << " \n Enter The Max Number : ";
    cin >> maxNumber;

    int sum = 0;

    for (int i = minNumber; i <= maxNumber; i++)
    {
        sum = sum + i;
    }
    cout << " \n The sum of Natural Numbers from  : " << minNumber << " << To >> " << maxNumber << " is : " << sum;
    cout << endl;
    return 0;
}
