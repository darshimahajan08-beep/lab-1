#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, position, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position where you want to insert element: ";
    cin >> position;

    cout << "Enter value to insert: ";
    cin >> value;

    if (position < 1 || position > n + 1)
    {
        cout << "Invalid position";
        return 0;
    }

    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;
    n++;

    cout << "Array after insertion: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
