#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;
    string author = "Peter";

protected:
    float price;

public:
    string publisher;

    void displayAuthorInfo() {
        cout << "Author: " << author << endl;
    }

    // Public setter and getter for title
    void setTitle(string t) {
        title = t;
    }

    string getTitle() {
        return title;
    }
};

int main() {
    Book myBook;

    // Trying to access private member directly
    // myBook.title = "C++ Basics";  //  This will cause a compilation error

    // Correct way using public setter and getter
    myBook.setTitle("C++ Basics");
    cout << "Title: " << myBook.getTitle() << endl;

    // Accessing public member
    myBook.publisher = "TechBooks Publishing";
    cout << "Publisher: " << myBook.publisher << endl;

    // Calling public function to display author info
    myBook.displayAuthorInfo();

    return 0;
}
