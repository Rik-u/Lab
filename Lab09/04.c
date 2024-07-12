#include <stdio.h>
#include <string.h>

struct Word {
    char word[21];
    int count;
};

int main()
{
    char input[21];
    int i, last_word = 0, find = 0;
    struct Word data[20] = {0};
    scanf("%20s", input);

    while (1) {
        scanf("%20s", input);
        if (input == "exit")
            break;

        for (find = 0; find <= last_word; find++)
        {
            if (data[find].word == input)
            {
                strcpy(data[find].word, input);
                data[find].count++;
                break;
            }
        }

        if (find > last_word)
        {
            strcpy(data[find - 1].word, input);
            data[find - 1].count++;
            (last_word)++;
        }
    }
}