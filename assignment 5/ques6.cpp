#include <iostream>
using namespace std;

class Book {
protected:
    string title;
    string author;
    double price;
public:
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }
    void displayBook() {
        cout << title << " " << author << " " << price << endl;
    }
};

class Textbook : public Book {
    string subject;
public:
    Textbook(string t, string a, double p, string s)
        : Book(t, a, p) {
        subject = s;
    }
    void displayTextbook() {
        displayBook();
        cout << subject << endl;
    }
};

int main() {
    Textbook obj("Maths", "John", 500, "Algebra");
    obj.displayTextbook();
    return 0;
}
