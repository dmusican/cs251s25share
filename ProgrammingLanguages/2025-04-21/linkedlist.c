#include <stdio.h>

typedef struct LinkedList {
    int value;
    struct LinkedList *next;
} LinkedList;

int main() {
    LinkedList *list = NULL;
