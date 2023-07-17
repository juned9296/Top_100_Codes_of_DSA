#include <iostream>
using namespace std;

//  ◾️ Program 18  ⇢ Find The Power of Given Number  ⇠ ◾️

int main()
{

    system("clear");
    int Base, Exponent, i, Product = 1;
    cout << "\n Enter The Base : ";
    cin >> Base;
    cout << "\n Enter The Exponent : ";
    cin >> Exponent;

    for (i = 1; i <= Exponent; i++)
    {
        Product = Product * Base;
    }
    cout << " \n The Final Value  is " << Product;
    return 0;
}
