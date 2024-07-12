#include <iostream>
using namespace std;

/** OOP is A-PIE
 * Abtracstion -> prototype
 * Polymophism
 * Inheritence
 * Encapsulation -> data hiding
*/

struct __Book {
private:
    string title;
    int totalPage;
    int read;
public:
    void construct(string title, int totalPage) {
        this->title = title;
        this->totalPage = totalPage
    }
    void print() {
        cout << title << " (read: " << read << "/" << totalPage << ")" << endl;
    }
}

typedef