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

    
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    
    int count = 0;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(matrix[i][j] != 0)
                count++;
        }
    }

    
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

   
    int transpose[count + 1][3];

    transpose[0][0] = sparse[0][1];
    transpose[0][1] = sparse[0][0];
    transpose[0][2] = sparse[0][2];

    k = 1;

    for(int i = 0; i < col; i++)
    {
        for(int j = 1; j <= count; j++)
        {
            if(sparse[j][1] == i)
            {
                transpose[k][0] = sparse[j][1];
                transpose[k][1] = sparse[j][0];
                transpose[k][2] = sparse[j][2];
                k++;
            }
        }
    }

    cout << "\nSimple Transpose:\n";
    cout << "Row\tCol\tValue\n";

    for(int i = 0; i <= count; i++)
    {
        cout << transpose[i][0] << "\t"
             << transpose[i][1] << "\t"
             << transpose[i][2] << endl;
    }

    return 0;
}