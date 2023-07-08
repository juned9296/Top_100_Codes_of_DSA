#include <iostream>
using namespace std;

 // ◾️ Program 6 ⇢   Find the Greatest of the Three Numbers ◾️  

int main()
{
    system("clear");
    int first;
    cout << "\n Enter the First Number : ";
    cin >> first;

    int second;
    cout << "\n Enter the Second Number : ";
    cin >> second;

    int third;
    cout << "\n Enter the third Number  : ";
    cin >> third;

    if ((first >= second) && (first >= third))
    {
        cout << first << " is the greatest ";
    }
    else if ((second >= first) && (second >= third))
    {
        cout << second << " is the greatest ";
    }
    else
    {
        cout << third << " is the greatest";
    }
    return 0;
}
