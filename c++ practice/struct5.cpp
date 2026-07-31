#include<iostream>
using namespace std;
struct book{
    int Book_ID,price;
    string Book_name,Author_name;
};
int main()
{
    int i;
    int maxIndex = 0;
    book s[3];
    for(i=0;i<3;i++)
    {
        cout << "\nEnter details of book " << i + 1 << endl;

        cout<<"Enter book id:"<<endl;
        cin>>s[i].Book_ID;
        cout<<"Enter book name:"<<endl;
        cin>>s[i].Book_name;
        cout<<"Enter author name:"<<endl;
        cin>>s[i].Author_name;
        cout<<"Enter price:"<<endl;
        cin>>s[i].price;
    }
    for(i=0;i<3;i++)
    {
       cout<<"ID:"<<s[i].Book_ID<<endl;
       cout<<"Name:"<<s[i].Book_name<<endl;
       cout<<"Author:"<<s[i].Author_name<<endl;
       cout<<"Price:"<<s[i].price<<endl;
    } 
   


for(int i = 1; i < 3; i++)
{
    if(s[i].price > s[maxIndex].price)
    {
        maxIndex = i;
    }
}

cout << "\nMost Expensive Book\n";
cout << "ID : " << s[maxIndex].Book_ID << endl;
cout << "Name : " << s[maxIndex].Book_name << endl;
cout << "Author : " << s[maxIndex].Author_name << endl;
cout << "Price : " << s[maxIndex].price << endl;
}