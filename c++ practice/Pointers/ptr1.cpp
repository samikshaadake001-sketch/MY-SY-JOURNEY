#include<iostream>
using namespace std;
int main()
{
    int a=10,*ptr=&a;
    cout<<"value:"<<a<<"\n";
    cout<<"address:"<<&a<<"\n";
    cout<<"value in address:"<<ptr<<"\n";
    cout<<"value in pointer:"<<*ptr<<"\n";
}