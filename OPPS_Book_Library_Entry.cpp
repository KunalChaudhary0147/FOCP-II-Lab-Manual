/*Scenario:
Store and display book details.
Class Name:
Book
Attributes:
•	string title
•	string author
•	double price
Methods:
•	void inputDetails()
•	void displayDetails()
*/

#include <iostream>
using namespace std;

class Book
{
    string title;
    string author;
    double price;

    public:
    void inputDetails()
    {
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter book author: ";
        cin >> author;
        cout << "Enter book price: ";
        cin >> price;
    }

    void displayDetails()
    {
        cout << "\nBook Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main()
{
    Book book;

    book.inputDetails();
    book.displayDetails();

    return 0;
}