#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("myfile.txt");
    
    file<<"Name:Samiksha"<<endl;
    
    file<<"Branch:Computer Engineering"<<endl;
    
    file.close();
    cout<<"Data added successfully";
}