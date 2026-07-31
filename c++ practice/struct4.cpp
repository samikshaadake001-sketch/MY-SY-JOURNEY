#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
};

void display(Student s)
{
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
}

int main()
{
    Student s1;

    s1.name = "Samiksha";
    s1.roll = 25;

    display(s1);

    return 0;
}