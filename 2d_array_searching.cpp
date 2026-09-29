#include <iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int rows, cols, value;
    bool found = false;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter matrix elements:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter element to search: ";
    cin >> value;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == value)
            {
                cout << "Element found at row "
                     << i + 1
                     << " and column "
                     << j + 1 << endl;

                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "Element not found";
    }

    return 0;
}
