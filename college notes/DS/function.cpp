#include <iostream>
using namespace std;

void inputMatrix(int row, int col, int matrix[][100], int &count)
{
    cout << "\nEnter matrix elements:\n";
    count = 0;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];

            if(matrix[i][j] != 0)
                count++;
        }
    }
}

void displayMatrix(int row, int col, int matrix[][100])
{
    cout << "\nOriginal Matrix:\n";

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void displaySparseMatrix(int row, int col, int matrix[][100], int count)
{
    cout << "\nSparse Matrix:\n";
    cout << "Row\tCol\tValue\n";
    cout << row << "\t" << col << "\t" << count << endl;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matrix[i][j] != 0)
            {
                cout << i << "\t" << j << "\t" << matrix[i][j] << endl;
            }
        }
    }
}

int main()
{
    int row, col;
    int count;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int matrix[100][100];

    inputMatrix(row, col, matrix, count);

    displayMatrix(row, col, matrix);

    displaySparseMatrix(row, col, matrix, count);

    return 0;
}