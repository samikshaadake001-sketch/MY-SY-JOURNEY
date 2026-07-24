#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int matrix[row][col];

    cout << "\nEnter the elements:\n";

    // Input matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Count non-zero elements
    int count = 0;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matrix[i][j] != 0)
                count++;
        }
    }

    // Sparse Matrix
    int sparse[count + 1][3];

    sparse[0][0] = row;
    sparse[0][1] = col;
    sparse[0][2] = count;

    int k = 1;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matrix[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    cout << "\nSparse Matrix:\n";
    cout << "Row\tCol\tValue\n";

    for(int i = 0; i <= count; i++)
    {
        cout << sparse[i][0] << "\t"
             << sparse[i][1] << "\t"
             << sparse[i][2] << endl;
    }

    // ---------- Fast Transpose ----------

    int transpose[count + 1][3];

    transpose[0][0] = sparse[0][1];
    transpose[0][1] = sparse[0][0];
    transpose[0][2] = sparse[0][2];

    int total[col];
    int index[col];

    // Initialize total array
    for(int i = 0; i < col; i++)
        total[i] = 0;

    // Count elements in each column
    for(int i = 1; i <= count; i++)
        total[sparse[i][1]]++;

    // Calculate starting index
    index[0] = 1;
    for(int i = 1; i < col; i++)
        index[i] = index[i - 1] + total[i - 1];

    // Fast Transpose
    for(int i = 1; i <= count; i++)
    {
        int pos = index[sparse[i][1]];

        transpose[pos][0] = sparse[i][1];
        transpose[pos][1] = sparse[i][0];
        transpose[pos][2] = sparse[i][2];

        index[sparse[i][1]]++;
    }

    cout << "\nFast Transpose:\n";
    cout << "Row\tCol\tValue\n";

    for(int i = 0; i <= count; i++)
    {
        cout << transpose[i][0] << "\t"
             << transpose[i][1] << "\t"
             << transpose[i][2] << endl;
    }

    return 0;
}