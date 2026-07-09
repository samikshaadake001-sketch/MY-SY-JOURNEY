#include <iostream>
using namespace std;

int main() {
    int n, i, j, k;
    int a[10][10], b[10][10], res[10][10];

    cout << "Enter size of square matrix (n): ";
    cin >> n;

    cout << "Enter elements of Matrix A:\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Enter elements of Matrix B:\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> b[i][j];

    int op = 1;

    do {
        switch (op) {
            case 1: // Addition
                cout << "\n--- Addition (A + B) ---\n";
                for (i = 0; i < n; i++)
                    for (j = 0; j < n; j++)
                        res[i][j] = a[i][j] + b[i][j];
                break;

            case 2: // Subtraction
                cout << "\n--- Subtraction (A - B) ---\n";
                for (i = 0; i < n; i++)
                    for (j = 0; j < n; j++)
                        res[i][j] = a[i][j] - b[i][j];
                break;

            case 3: // Multiplication
                cout << "\n--- Multiplication (A x B) ---\n";
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        res[i][j] = 0;
                        for (k = 0; k < n; k++)
                            res[i][j] = res[i][j] + a[i][k] * b[k][j];
                    }
                }
                break;

        }

        // print result
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cout << res[i][j] << " ";
            cout << "\n";
        }

        op++;
    } while (op <= 3);

    return 0;
}