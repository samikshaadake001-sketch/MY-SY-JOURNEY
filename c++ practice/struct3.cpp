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
    Student s[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Roll: ";
        cin >> s[i].roll;

        cout << "CGPA: ";
        cin >> s[i].cgpa;
    }

    cout << "\n--- Student Details ---\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "Roll : " << s[i].roll << endl;
        cout << "CGPA : " << s[i].cgpa << endl;
    }

    return 0;
}