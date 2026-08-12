#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("Myfile.txt");
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
}