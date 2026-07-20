#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};

    int *p = arr;

    cout << *p << endl;

    p++;

    cout << *p << endl;

    cout << *p << endl;
cout << *(p + 1) << endl;
cout << *(p + 2) << endl;
cout << arr[3];
cout << *(arr + 3);

    return 0;
}
