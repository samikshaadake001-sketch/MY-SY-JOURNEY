#include <iostream>
using namespace std;
int square(int s)
{
    int area;
    area=s*s;
    return area;
}
int main() {
    int s,a;
    cout<<"Enter value for s:";
    cin>>s;
    a=square(s);
    cout<<"Area is:"<<a;
}