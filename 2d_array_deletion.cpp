#include <iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int rows, cols, row, col;

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

    cout << "Enter row position of element to delete: ";
    cin >> row;

    cout << "Enter column position of element to delete: ";
    cin >> col;

    if (row < 1 || row > rows || col < 1 || col > cols)
    {
        cout << "Invalid position";
        return 0;
    }

    arr[row - 1][col - 1] = 0;

    cout << "Matrix after deletion:" << endl;

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
