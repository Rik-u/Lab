#include <iostream>
#include "Book.h"
#include "Shelf.h"

using namespace std;

int main() {

    Book python;
    Book cpp_class("Introduction to Class", 450);

    python.setTitle("Basic Python for Beginner");

    cpp_class.readMore(12);
    cpp_class.readMore(34);

    python.print();
    cpp_class.print();

    Shelf shelf(10);
    shelf.addBook(&python);
    shelf.addBook(&cpp_class);
    shelf.addBook(new Book("Statistics Programming", 777));
    shelf.addBook(new Book("Next to Java", 1269));
    cout << "Total Pages of my book list is " << shelf.totalPages() << endl;
    shelf.readBook("Introduction to Class", 102);
    shelf.readBook("Next to Java", 88);
    cout << "Books in shelf: " << endl;
    cout << shelf.toString() << endl;
}