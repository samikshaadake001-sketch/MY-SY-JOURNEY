#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << "Before: " << a << endl;

    *ptr = 50;

    cout << "After: " << a << endl;

    return 0;
}   