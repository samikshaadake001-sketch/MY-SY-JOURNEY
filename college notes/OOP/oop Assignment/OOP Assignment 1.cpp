#include<iostream>
using namespace std;
class book
{
    private:
    int bookid,price;
    string book_name,author;
    public:
    void get_details()
    {
    cout<<"Enter book ID:";
    cin>>bookid;

    cout<<"Enter book name:";
    cin>>book_name;
    
    cout<<"Enter author name:";
    cin>>author;

    cout<<"Enter price:";
    cin>>price;
    }
    
    void print_details()
    {
        cout<<bookid<<"\t";
        cout<<book_name<<"\t";
        cout<<author<<"\t";
        cout<<price<<"\t";
    }
    int get_price()
    {
        return price;
    }
};
int main()
{
    int i,n,total=0;
    cout<<"Enter number of books:";
    cin>>n;
    book b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter book details:"<<i+1<<endl;
        b[i].get_details();
        
    }
    cout<<"BookID\tBook_name\tAuthor\tPrice\t"<<endl;
    for(i=0;i<n;i++)
    {
         b[i].print_details();
         cout<<endl;
        total = total + b[i].get_price();
    }
    cout<<"Total price of books is:"<<total<<endl;
    return 0;
}