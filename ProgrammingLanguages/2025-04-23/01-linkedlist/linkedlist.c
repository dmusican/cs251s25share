#include "linkedlist.h"
#include <stdlib.h>

SchemeVal *makeEmpty() {
    SchemeVal *thing = malloc(sizeof(SchemeVal));
    thing->type = CONS_TYPE;
    SchemeVal *x = malloc(sizeof(SchemeVal));
    x->type = INT_TYPE;
    x->i = 3;
    thing->car = x;
    SchemeVal *y = malloc(sizeof(SchemeVal));
    y -> type = EMPTY_TYPE;
    return thing;
}

SchemeVal *cons(SchemeVal *newCar, SchemeVal *newCdr) {
    return NULL;
}

void display(SchemeVal *list) {

}

SchemeVal *reverse(SchemeVal *list) {
    return NULL;
}

void cleanup(SchemeVal *list) {
    
}

SchemeVal *car(SchemeVal *list) {
    return NULL;
}

SchemeVal *cdr(SchemeVal *list) {
    return NULL;
}

bool isEmpty(SchemeVal *value) {
    return true;
}

int length(SchemeVal *value) {
    return 0;
}
