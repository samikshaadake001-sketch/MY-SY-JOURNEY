#include <iostream>

using namespace std;

int main() {

    string name;

    int i,count=0;

    cout<<"Enter a string:";

    cin>>name;

    for(i=0;i<name.length();i++)

    {

        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')

        {

        count++;

        }

    }

    cout<<"Total vowels are:"<<count;

}

