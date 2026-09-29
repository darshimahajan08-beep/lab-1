#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, value;
    int position = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> value;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
    {
        cout << "Element found at position "
             << position + 1;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
