#include <iostream>
using namespace std;

 // ◾️ Program 3 ⇢ Find the Sum of N Natural Numbers ◾️

int main()
{ 
    system("clear");
    int n;
    cout << " Entere A Number  : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of N Natural Numbers is : " <<sum ;
}
