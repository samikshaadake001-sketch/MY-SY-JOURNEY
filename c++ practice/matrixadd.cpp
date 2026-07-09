#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int A[row][col], B[row][col], Sum[row][col];

    cout << "\nEnter elements of Matrix A:\n";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B:\n";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nSum of the matrices is:\n";

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}