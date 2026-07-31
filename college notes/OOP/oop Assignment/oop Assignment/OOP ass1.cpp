#include <iostream>
#include <iomanip>
using namespace std;

class book
{
private:
    int bookid, price;
    string book_name, author;

public:
    void get_details()
    {
        cout << "Enter Book ID: ";
        cin >> bookid;

        cout << "Enter Book Name: ";
        cin >> book_name;

        cout << "Enter Author Name: ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;
    }

    void print_details()
    {
        cout << left << setw(10) << bookid
             << setw(20) << book_name
             << setw(20) << author
             << setw(10) << price << endl;
    }

    int get_price()
    {
        return price;
    }
};

int main()
{
    int i, n, total = 0;

    cout << "Enter number of books: ";
    cin >> n;

    book b[n];

    // Input
    for(i = 0; i < n; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << endl;
        b[i].get_details();
    }

    // Table Heading
    cout << "\n";
    cout << left << setw(10) << "Book ID"
         << setw(20) << "Book Name"
         << setw(20) << "Author"
         << setw(10) << "Price" << endl;

    cout << "------------------------------------------------------------" << endl;

    // Print Details
    for(i = 0; i < n; i++)
    {
        b[i].print_details();
        total += b[i].get_price();
    }

    cout << "------------------------------------------------------------" << endl;
    cout << "Total Price of All Books = " << total << endl;

    return 0;
}