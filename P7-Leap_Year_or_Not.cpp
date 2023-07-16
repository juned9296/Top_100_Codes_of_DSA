#include <iostream>
using namespace std;

 // ◾️ Program 7 ⇢  Check if the Year is a Leap Year or Not in ◾️  

int main()
{
    system("clear");
    int year;
    cout << "Enter The Year ";
    cin >> year;

    if (year % 400 == 0) // for century year like ⇢ 1800, 2000
    {
        cout << year << " is the leap Year ";
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << year << " is the leap Year ";
    }
    else
    {
        cout << year << " is not  leap Year ";
    }
    return 0;
}
