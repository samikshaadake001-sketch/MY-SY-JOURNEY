#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    float cgpa;
};

int main()
{
    Student s1;

    s1.name = "Samiksha";
    s1.roll = 25;
    s1.cgpa = 9.2;

    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.roll << endl;
    cout << "CGPA: " << s1.cgpa << endl;

    return 0;
}