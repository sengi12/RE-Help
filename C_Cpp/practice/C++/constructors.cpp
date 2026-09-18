#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages)
        {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            cout << "Creating " << title << endl;
        }
        Book()
        {
            title = "no title";
            author = "no author";
            pages = 0;
            cout << "Creating " << title << endl;
        }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 500);

    cout << book1.author << endl;

    Book book2("Lord of the Rings", "Tolkein", 700);

    cout << book2.author << endl;

    Book book3;

    cout << book3.author << endl;

    return 0;
}