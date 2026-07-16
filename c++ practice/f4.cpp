#include <iostream>
using namespace std;
void maximum(int a,int b)
{
    if(a>b)
    cout<<"a is greater";
    else if(a<b)
    cout<<"b is greater";
    else
    cout<<"Both are equal";
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    maximum(a,b);
}