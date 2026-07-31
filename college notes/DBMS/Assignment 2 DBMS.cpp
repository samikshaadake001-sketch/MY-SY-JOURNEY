#include <iostream>
using namespace std;

int rows, cols;
int matrix[100][100];
int sparse[101][3];
int nonZero = 0;
bool entered = false;


void enterMatrix()
{
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "\nEnter the elements of the matrix:\n";

    nonZero = 0;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin >> matrix[i][j];

            if(matrix[i][j] != 0)
                nonZero++;
        }
    }

    int zero = (rows * cols) - nonZero;

    if(zero > nonZero)
        cout << "\nThe given matrix is a Sparse Matrix.\n";
    else
        cout << "\nThe given matrix is NOT a Sparse Matrix.\n";

    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = nonZero;

    int k = 1;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
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

    entered = true;
}


void displaySparse()
{
    if(!entered)
    {
        cout << "\nPlease enter the matrix first.\n";
        return;
    }

    cout << "\nSparse Matrix (3-Tuple Representation)\n";
    cout << "Row\tCol\tValue\n";

    for(int i=0;i<=nonZero;i++)
    {
        cout << sparse[i][0] << "\t"
             << sparse[i][1] << "\t"
             << sparse[i][2] << endl;
    }
}


void simpleTranspose()
{
    if(!entered)
    {
        cout << "\nPlease enter the matrix first.\n";
        return;
    }

    int transpose[101][3];

    transpose[0][0] = cols;
    transpose[0][1] = rows;
    transpose[0][2] = nonZero;

    int k = 1;

    for(int col=0; col<cols; col++)
    {
        for(int i=1; i<=nonZero; i++)
        {
            if(sparse[i][1] == col)
            {
                transpose[k][0] = sparse[i][1];
                transpose[k][1] = sparse[i][0];
                transpose[k][2] = sparse[i][2];
                k++;
            }
        }
    }

    cout << "\nSimple Transpose (3-Tuple Representation)\n";
    cout << "Row\tCol\tValue\n";

    for(int i=0;i<=nonZero;i++)
    {
        cout << transpose[i][0] << "\t"
             << transpose[i][1] << "\t"
             << transpose[i][2] << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Enter Matrix\n";
        cout << "2. Display Sparse Matrix\n";
        cout << "3. Simple Transpose\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            enterMatrix();
        }
        else if(choice == 2)
        {
            displaySparse();
        }
        else if(choice == 3)
        {
            simpleTranspose();
        }
        else if(choice == 4)
        {
            cout << "\nExiting Program...\n";
        }
        else
        {
            cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}