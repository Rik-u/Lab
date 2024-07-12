#include "Book.h"

// :: scope resolution operator (Use function in a class)

void Book::print() {
    cout << title << " (read: " << read << "/" << totalPage << ")" << endl;
}

Book::Book() {
    title = "";
    totalPage = 0;
    read = 0;
}

Book::Book(string title, int totalPage) {
    this->title = title;
    this->totalPage = totalPage;
    read = 0;
}

void Book::readMore(int page) {
    if (page > 0) {
        read = min(read + page, totalPage);
    }
}

string Book::getTitle() {
    return title;
}

int Book::getTotalPage() {
    return totalPage;
}

int Book::getRead() {
    return read;
}

void Book::setTitle(string title) {
    this->title = title;
}

string Book::toString() {
    string result = "";
    result += "Title " + title + "\n";
    result += "Read: " + to_string(read) + "\n";
    result += "Total Page: " + to_string(totalPage);

    return result;
}