#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("college.txt",ios::out);
    file<<"VIT Pune"<<endl;
    file<<"Computer Engineering"<<endl;
    file.close();
    file.open("college.txt",ios::in);
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
}