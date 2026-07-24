#include<iostream>
using namespace std;
class area{
    public:
    void areaa(int s)
    {
        cout<<"area:"<<s*s<<endl;
    }
    void areaa(int l,int b)
    {
        cout<<"area:"<<l*b<<endl;
    }
    void areaa(float r){
        cout<<"area:"<<3.14*r*r<<endl;
    }
};
int main()
{
    area a;
    a.areaa(5);
    a.areaa(5,6);
    a.areaa(7);
    return 0;
}