#include<iostream>
using namespace std;

int main()
{
    char str1[50], str2[50], str3[50];
    int i=0, j=0, len=0;

    cout<<"Enter first string: ";
    cin>>str1;

    cout<<"Enter second string: ";
    cin>>str3;

   
    while(str1[len]!='\0')
    {
        len++;
    }
    cout<<"\nLength = "<<len;

    
    i=0;
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';

    cout<<"\nCopied String = "<<str2;

    
    cout<<"\nReverse String = ";
    for(i=len-1;i>=0;i--)
    {
        cout<<str1[i];
    }

    
    i=0;
    while(str1[i]!='\0')
    {
        i++;
    }

    j=0;
    while(str3[j]!='\0')
    {
        str1[i]=str3[j];
        i++;
        j++;
    }

    str1[i]='\0';

    cout<<"\nConcatenated String = "<<str1;

    return 0;
}