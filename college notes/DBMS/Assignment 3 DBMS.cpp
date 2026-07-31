#include <iostream>
using namespace std;

const int MAX = 100;

struct Term
{
    int row;
    int col;
    int value;
};

int rows, cols;
int matrix[MAX][MAX];
Term sparse[MAX], transpose[MAX];


void enterMatrix()
{
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "\nEnter matrix elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int k = 1;

    sparse[0].row = rows;
    sparse[0].col = cols;
    sparse[0].value = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
                sparse[0].value++;
            }
        }
    }

    cout << "\nMatrix converted into Sparse Matrix successfully.\n";
}


void displaySparse()
{
    if (sparse[0].value == 0)
    {
        cout << "\nPlease enter the matrix first.\n";
        return;
    }

    cout << "\nSparse Matrix (3-Tuple Representation)\n";
    cout << "Row\tCol\tValue\n";

    for (int i = 0; i <= sparse[0].value; i++)
    {
        cout << sparse[i].row << "\t"
             << sparse[i].col << "\t"
             << sparse[i].value << endl;
    }
}


void fastTranspose()
{
    if (sparse[0].value == 0)
    {
        cout << "\nPlease enter the matrix first.\n";
        return;
    }

    int row_terms[MAX], starting_pos[MAX];

    int num_cols = sparse[0].col;
    int num_terms = sparse[0].value;

    transpose[0].row = num_cols;
    transpose[0].col = sparse[0].row;
    transpose[0].value = num_terms;

    for (int i = 0; i < num_cols; i++)
        row_terms[i] = 0;

   
    for (int i = 1; i <= num_terms; i++)
        row_terms[sparse[i].col]++;

   
    starting_pos[0] = 1;

    for (int i = 1; i < num_cols; i++)
        starting_pos[i] = starting_pos[i - 1] + row_terms[i - 1];

    
    for (int i = 1; i <= num_terms; i++)
    {
        int j = starting_pos[sparse[i].col];

        transpose[j].row = sparse[i].col;
        transpose[j].col = sparse[i].row;
        transpose[j].value = sparse[i].value;

        starting_pos[sparse[i].col]++;
    }

    cout << "\nFast Transpose\n";
    cout << "Row\tCol\tValue\n";

    for (int i = 0; i <= transpose[0].value; i++)
    {
        cout << transpose[i].row << "\t"
             << transpose[i].col << "\t"
             << transpose[i].value << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Enter Simple Matrix\n";
        cout << "2. Display Sparse Matrix\n";
        cout << "3. Fast Transpose\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            enterMatrix();
            break;

        case 2:
            displaySparse();
            break;

        case 3:
            fastTranspose();
            break;

        case 4:
            cout << "\nExiting Program...\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}