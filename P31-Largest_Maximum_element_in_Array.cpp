#include <iostream>
using namespace std;

int main()
{
    system("clear");
    const int size = 5;
    int arr[size];

    cout << " Enter " << size << " Enter elements in the array : \n ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maxElement = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    cout << " The Largest Element in the array is: " << maxElement;
    return 0;
}
