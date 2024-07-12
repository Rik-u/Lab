#ifndef SHELF_H
#define SHELF_H

#include <iostream>
#include "Book.h"
using namespace std;

class Shelf {
private:
    Book **books;
    int maxBooks;
    int size;

public:
    Shelf(int);
    int getSize();
    int getMaxBooks();
    void addBook(Book *);
    int totalPages();
    void readBook(string, int);
    string toString();

};

#endif