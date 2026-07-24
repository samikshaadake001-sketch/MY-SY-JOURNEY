#include<iostream>
using namespace std;
class calculate{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }

};
int main()
{
    calculate calc;
    calc.add(5,6);
    calc.add(5,6,7);
    return 0;
}