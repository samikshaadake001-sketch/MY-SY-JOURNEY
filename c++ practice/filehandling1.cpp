#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("student.txt");

    file<<"Name: Samiksha"<<endl;
    file<<"Age: 20";

    file.close();

    cout<<"Data saved successfully.";

    return 0;
}