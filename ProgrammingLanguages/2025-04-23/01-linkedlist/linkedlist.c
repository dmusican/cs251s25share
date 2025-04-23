#include "linkedlist.h"

SchemeVal *makeEmpty() {
    return null;
}

SchemeVal *cons(SchemeVal *newCar, SchemeVal *newCdr) {
    return null;
}

void display(SchemeVal *list) {
    return null;
}

SchemeVal *reverse(SchemeVal *list) {
    return null;
}

void cleanup(SchemeVal *list) {
    return null;
}

// Utility to make it less typing to get car value. Use assertions to make sure
// that this is a legitimate operation.
SchemeVal *car(SchemeVal *list);

// Utility to make it less typing to get cdr value. Use assertions to make sure
// that this is a legitimate operation.
SchemeVal *cdr(SchemeVal *list);

// Utility to check if pointing to a NULL_TYPE value. Use assertions to make sure
// that this is a legitimate operation.
bool isEmpty(SchemeVal *value);

// Measure length of list. Use assertions to make sure that this is a legitimate
// operation.
int length(SchemeVal *value);


#endif
