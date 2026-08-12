#include<iostream>
using namespace std;
int add(int a,int b=5)
{
    return a+b;
}
int main()
{
    int result;
    result=add(10);
    cout<<"Addition is:"<<result;
}