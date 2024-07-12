#include <iostream>
using namespace std;

typedef struct Word_ {
    string letters;
    int count = 0;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }

        for (find = 0; find <= last_word; find++)
        {
            if (data[find].letters == input)
            {
                data[find].letters = input;
                data[find].count++;
                break;
            }
        }

        if (find > last_word)
        {
            data[find - 1].letters = input;
            data[find - 1].count++;
            (last_word)++;
        }
    }
    
            
    cout << "Output:" << endl;

    for (int index = 0; index <= last_word-1; index++) {
        cout << data[index].letters << " = " << data[index].count << endl;
    }

    return 0;
}
