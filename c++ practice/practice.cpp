#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int *array= new int[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Numbers are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    int max=array[0];
    for(i=0;i<n;i++)
    {
       
    if(max<array[i])
    {
        max=array[i];
    }
    }
    cout<<"max:"<<max<<endl;
    delete[] array;
}