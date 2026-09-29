#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, position;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position of element to delete: ";
    cin >> position;

    if (position < 1 || position > n)
    {
        cout << "Invalid position";
        return 0;
    }

    for (int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
