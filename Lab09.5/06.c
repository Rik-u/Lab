#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Linked_list {
    int num;
    struct Linked_list *next;    
}Num;

void insert(int number, Num** list) {
    Num* new_node = (Num*)malloc(sizeof(Num));
    new_node->num = number;
    new_node->next = NULL;
    if (list == NULL) {
        *list = new_node;
    }
    else {
        Num* current_node = *list;
        Num* prev_node = NULL;
        while (current_node != NULL && current_node->num <= number) {
            prev_node = current_node;
            current_node = current_node->next;
        }
        if (prev_node == NULL) {
            new_node->next = current_node;
            *list = new_node;
        }
        else {
            new_node->next = current_node;
            prev_node->next = new_node;
        }
    }
}

void delete(int number, Num** list) {
    Num* current_node = *list;
    Num* prev_node = NULL;
    while (current_node != NULL && current_node->num == number) {
        prev_node = current_node;
        current_node = current_node->next;
    }
}

void print(Num* list) {
    Num* current_node = list;
    printf("[ ");
    while (current_node != NULL) {
        printf("%d ", current_node->num);
        current_node = current_node->next;
    }
    printf("]\n");
}

int main() {
    char input, buf[10];
    int num;
    Num* linked_list = NULL;

    while (1) {
        printf("input> ");
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, " %c %d", &input, &num);
        
        switch (input) {
            case 'p':
                print(linked_list);
                break;
            case 'i':
                insert(num, &linked_list);
                break;
            case 'd':
                delete(num, &linked_list);
                break;
            case 'q':
                exit(0);
            default:
                printf("Invalid input\n");
                break;
        }
    }

}