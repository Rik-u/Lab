#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {
private:   //data hiding -> hide data member
    string title;
    int totalPage;
    int read;

public: // member functions
    // Constructor -> Initialize data member of object
    Book();        // Default constructor
    Book(string, int); // constructor with 2 parameters

    void print();
    void readMore(int);
    bool isTitle(string);

    // Getter, Accessor
    string getTitle();
    int getTotalPage();
    int getRead();

    // Setter, Mutator
    void setTitle(string);

    // toString
    string toString();
};

#endif