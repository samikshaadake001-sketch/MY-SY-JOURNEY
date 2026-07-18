#include <iostream>
using namespace std;
int palindrome(int n)
{
    int rev=0,digit,og;
    og=n;
    while(n!=0)
    {
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
    }
    if(rev==og)
    return 1;
    else
    return 0;
}
int main() {
    int a,n;
    cout<<"Enter value for n:";
    cin>>n;
    a=palindrome(n);
    if(a==1)
    cout<<"Palindrome";
    else
    cout<<"Not palindrome";
}