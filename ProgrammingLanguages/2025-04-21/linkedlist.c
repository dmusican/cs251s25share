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
    // do this


}

int main() {
    LinkedList *numbers = NULL;
    for (int i=0; i < 5; i++) {
        numbers = insertFrontLL(numbers, i);
    }
}
