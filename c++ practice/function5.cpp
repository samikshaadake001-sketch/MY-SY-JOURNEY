#include<iostream>
using namespace std;

int square(int);

int main()
{
    int n, result;

    cout << "Enter number to find square:" << endl;
    cin >> n;

    cout << "Calling function..." << endl;

    result = square(n);

    cout << "Function returned..." << endl;

    cout << "Square is: " << result << endl;

    return 0;
}

int square(int n)
{
    return n * n;
}