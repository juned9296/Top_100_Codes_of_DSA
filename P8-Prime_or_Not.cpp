#include <iostream>
using namespace std;

//  ◾️ Program 8 ⇢   The Given Number Prime Or Not   ⇠ ◾️

int main()
{

    system("clear");
    int num, j, count = 0;
    cout << " Enter The Number ";
    cin >> num;

    for (j = 1; j <= num; j++)
    {
       if(num % j == 0)
        count++;
    }
    if (count == 2)
    {
        cout << num << " Is Prime Number ";
    }
    else
    {
        cout << num << " Is Composite Number ";
    }
    return 0;
}