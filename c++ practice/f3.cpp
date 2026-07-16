#include <iostream>
using namespace std;
int factorial()
{
    int fact=1,i,s;
    cout<<"Enter value for s:";
    cin>>s;
    for(i=1;i<=s;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main() {
    int a;
    a=factorial();
    cout<<"Answer is:"<<a;
}