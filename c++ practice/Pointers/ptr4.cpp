#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};

    int *p = arr;

    cout << p << endl;

    p++;

    cout << p << endl;

    return 0;
}