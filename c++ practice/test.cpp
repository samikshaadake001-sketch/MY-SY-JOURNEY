#include <iostream>
using namespace std;
int main() {
    int array[5],i;
    cout<<"Enter 5 numbers:";
    for(i=0;i<5;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<5;i++)
    {
        if(array[i]%2!=0)
        cout<<array[i]<<" ";
    }
}