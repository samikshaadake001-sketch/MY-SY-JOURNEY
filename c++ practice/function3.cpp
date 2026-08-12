#include<iostream>
using namespace std;
int multiply(int a,int b)
{
   return a*b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    int result=multiply(a,b);
    cout<<"Multiplication is:"<<result;
}