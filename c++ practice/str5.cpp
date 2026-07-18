#include <iostream>
using namespace std;
int main() {
    string stri;
    int count=1,i;
    cout<<"Enter a line:";
    getline(cin,stri);
    for(i=0;i<stri.length();i++)
    {
        if(stri[i]==' ')
        count++;
    }
    cout<<"Count is:"<<count;
}