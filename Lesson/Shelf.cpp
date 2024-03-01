#include "Shelf.h"

Shelf::Shelf(int maxBooks) : maxBooks(maxBooks), size(0){
    books = (Book **)malloc(maxBooks * sizeof(Book *));

}

int Shelf::getSize() { return size; }
int Shelf::getMaxBooks() { return maxBooks; }
string Shelf::toString() {
    string result = "";
    for (int i = 0; i < size; ++i) {
        result += books[i]->toString() + "\n";

    }
    return result;
}

void Shelf::addBook(Book *book) {
    if (size == maxBooks)
        return;
    books[size++] = book;
}
int Shelf::totalPages() {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += books[i]->getTotalPage();
    }
    return total;
}
void Shelf::readBook(string title, int page) {
    for (int i = 0; i < size; ++i) {
        if (books[i]->getTitle() == title) {
            books[i]->readMore(page);
            return;
        }
    }
}