#include <iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int rows, cols, row, col, value;

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

    cout << "Enter row position: ";
    cin >> row;

    cout << "Enter column position: ";
    cin >> col;

    cout << "Enter value to insert: ";
    cin >> value;

    if (row < 1 || row > rows || col < 1 || col > cols)
    {
        cout << "Invalid position";
        return 0;
    }

    arr[row - 1][col - 1] = value;

    cout << "Matrix after insertion:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
