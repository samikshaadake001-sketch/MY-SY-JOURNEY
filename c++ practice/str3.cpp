#include <iostream>
using namespace std;
int main() {
    string name;
    int i;
    cout<<"Enter a string:";
    cin>>name;
    cout<<"Reverse is:";
    for(i=name.length()-1;i>=0;i--)
    {
        cout<<name[i];
    }
}