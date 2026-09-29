#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int rows, cols, choice;

    do
    {
        cout << "\n--- MATRIX CALCULATOR ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Multiplication" << endl;
        cout << "3. Transpose" << endl;
        cout << "4. Determinant (2x2)" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter rows and columns: ";
            cin >> rows >> cols;

            cout << "Enter first matrix:" << endl;
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    cin >> A[i][j];

            cout << "Enter second matrix:" << endl;
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    cin >> B[i][j];

            cout << "Addition of matrices:" << endl;

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    C[i][j] = A[i][j] + B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }

        else if (choice == 2)
        {
            int r1, c1, r2, c2;

            cout << "Enter rows and columns of first matrix: ";
            cin >> r1 >> c1;

            cout << "Enter rows and columns of second matrix: ";
            cin >> r2 >> c2;

            if (c1 != r2)
            {
                cout << "Multiplication is not possible." << endl;
            }
            else
            {
                cout << "Enter first matrix:" << endl;

                for (int i = 0; i < r1; i++)
                    for (int j = 0; j < c1; j++)
                        cin >> A[i][j];

                cout << "Enter second matrix:" << endl;

                for (int i = 0; i < r2; i++)
                    for (int j = 0; j < c2; j++)
                        cin >> B[i][j];

                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c2; j++)
                    {
                        C[i][j] = 0;

                        for (int k = 0; k < c1; k++)
                        {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }

                cout << "Multiplication of matrices:" << endl;

                for (int i = 0; i < r1; i++)
                {
                    for (int j = 0; j < c2; j++)
                        cout << C[i][j] << " ";

                    cout << endl;
                }
            }
        }

        else if (choice == 3)
        {
            cout << "Enter rows and columns: ";
            cin >> rows >> cols;

            cout << "Enter matrix:" << endl;

            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    cin >> A[i][j];

            cout << "Transpose of matrix:" << endl;

            for (int i = 0; i < cols; i++)
            {
                for (int j = 0; j < rows; j++)
                {
                    cout << A[j][i] << " ";
                }
                cout << endl;
            }
        }

        else if (choice == 4)
        {
            cout << "Enter 2x2 matrix:" << endl;

            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    cin >> A[i][j];

            int determinant;

            determinant =
                A[0][0] * A[1][1]
                - A[0][1] * A[1][0];

            cout << "Determinant = "
                 << determinant << endl;
        }

        else if (choice == 5)
        {
            cout << "Program ended." << endl;
        }

        else
        {
            cout << "Invalid choice." << endl;
        }

    } while (choice != 5);

    return 0;
}
