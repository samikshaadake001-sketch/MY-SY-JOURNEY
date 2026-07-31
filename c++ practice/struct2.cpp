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

    cout << "Enter Name: ";
    cin >> s1.name;

    cout << "Enter Roll No: ";
    cin >> s1.roll;

    cout << "Enter CGPA: ";
    cin >> s1.cgpa;

    cout << "\nStudent Details\n";
    cout << "Name : " << s1.name << endl;
    cout << "Roll : " << s1.roll << endl;
    cout << "CGPA : " << s1.cgpa << endl;

    return 0;
}