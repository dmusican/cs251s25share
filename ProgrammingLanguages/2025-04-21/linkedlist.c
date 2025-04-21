#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
    int value;
    struct LinkedList *next;
} LinkedList;

LinkedList *insertFrontLL(LinkedList *list, int item) {
    LinkedList *cell = malloc(sizeof(LinkedList));

    // (*cell).value = item;
    cell->value = item;
    cell->next = list;
    return cell;
}

void displayLL(LinkedList *list) {
    LinkedList *cur = list;
    while (cur != NULL) {
        printf("Value = %i\n", cur->value);
        cur = cur->next;
    }
}

// free all structs in the list
void cleanupLL(LinkedList *list) {
    // wrong but close
    LinkedList *cur = list;
    while (cur != NULL) {
        free(cur);
        cur = cur->next;
    }
}

int main() {
    LinkedList *numbers = NULL;
    for (int i=0; i < 5; i++) {
        numbers = insertFrontLL(numbers, i);
    }
    displayLL(numbers);
    cleanupLL(numbers);

    // Start over with a new list
    numbers = NULL;
    for (int i=60; i < 65; i++) {
        numbers = insertFrontLL(numbers, i);
    }
    displayLL(numbers);
    cleanupLL(numbers);


}
