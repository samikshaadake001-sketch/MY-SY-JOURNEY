#include<iostream>
using namespace std;
int square(int);
int main()
{
    int n,result;
    cout<<"Enter number to find square:"<<endl;
    cin>>n;
    result=square(n);
    cout<<"Square is:"<<result;
}
int square(int n)
{
   return n*n;
}