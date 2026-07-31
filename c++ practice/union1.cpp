#include<iostream>
using namespace std;

union Data
{
    int num;
    float marks;
    char grade;
};

int main()
{
    Data d;

    d.num = 50;
    cout << "Number: " << d.num << endl;

    d.marks = 92.5;
    cout << "Marks: " << d.marks << endl;

    return 0;
}