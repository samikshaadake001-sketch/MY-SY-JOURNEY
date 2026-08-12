#include<iostream>
using namespace std;
void add(int a,int b)
{
    int c;
    c=a+b;
    cout<<"Addition is:"<<c;
}
int main()
{
    
  int a,b;
  cout<<"Enter two numbers:";
  cin>>a>>b;
  add(a,b);
}