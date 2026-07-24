#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void getData(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;

    s.getData(101, "Samiksha");
    s.display();

    return 0;
}