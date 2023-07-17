#include <iostream>
using namespace std;

 // ◾️ Program 12 ⇢ Program to check whether a number is palindrome or not  ◾️ 

int main()

{
    system("clear");
    int num, reverse = 0, orig;
    cout << " Enter the Number ";
    cin >> num;
    orig = num;

    while (num > 0)
    {
        reverse = (reverse * 10) + num % 10;
        num = num / 10;
    };
    cout << " Number is Reversed " << reverse <<endl;
    if (orig == reverse)
    {
        cout << orig << "  Is Palindrome ";
    }
    else
    {
        cout << orig << "  Is Not Palindrome ";
    }
    return 0;
}



