// Multiple Structure Variables
// Create a Book structure with title, author, and price.
// Declare two book variables and initialize them with different values.
// Display their details.

#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

Book getBook();
void displayBook(Book);

int main(){
    Book b1,b2;
    b1 = getBook();
    b2 = getBook();

    displayBook(b1);
    displayBook(b2);
};

Book getBook(){
    Book b;

    cout << "\nEnter the Book title: ";
    cin.ignore();
    getline(cin,b.title);

    cout << "Enter the Book author: ";
    getline(cin, b.author);

    cout << "Enter the Book price: ";
    cin >> b.price;

    return b;
}

void displayBook(Book b){
    cout << "\nBook title: " << b.title << endl;
    cout << "Book author: " << b.author << endl;
    cout << "Book price: " << b.price << endl;

}