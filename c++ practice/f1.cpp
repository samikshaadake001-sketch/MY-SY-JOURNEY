#include <iostream>
using namespace std;
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,ans;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    ans=sum(a,b);
    cout<<"Answer:"<<ans;
}