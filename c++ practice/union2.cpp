#include<iostream>
using namespace std;
union employee{
    int ID;
    float salary;
};
int main()
{
    employee e;
    e.ID=105;
    cout<<"ID:"<<e.ID<<endl;
    e.salary=50000;
    cout<<"Salary:"<<e.salary<<endl;
    cout<<"ID:"<<e.ID<<endl;
    return 0;
}