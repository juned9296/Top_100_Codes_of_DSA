// Q- Write An if  statement that checks if a number is greater than 5 ?

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int num;
    cout << " Enter the number ";
    cin >> num;

    if (num > 5  )
    {
        cout << " The Number is Greater than 5";
    }
    else if(num == 5){

        cout << " The Number is  Equal";
    }
     else
    {
        cout << "The Number is less than 5";
    }
    return 0;
}
