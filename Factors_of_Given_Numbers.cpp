#include <iostream>
using namespace std;

//  ★ Program 18  ⇢ Find The Power of Given Number  ⇠ ★

int main()
{
  system("clear");

  int num;
  cout << "Enter the number ";
  cin >> num;

  cout << "The Factors Of " << num << " are >>";

  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      cout << " " << i;
    }
  }
}