#include <stdbool.h>
#include "schemeval.h"

#ifndef _LINKEDLIST
#define _LINKEDLIST

// Create a new EMPTY_TYPE value node.
SchemeVal *makeEmpty();

// Create a new CONS_TYPE value node.
SchemeVal *cons(SchemeVal *newCar, SchemeVal *newCdr);

// Display the contents of the linked list to the screen in some kind of
// readable format
void display(SchemeVal *list);

// Return a new list that is the reverse of the one that is passed in. All
// content within the list should be duplicated; there should be no shared
// memory whatsoever between the original list and the new one.
//
// FAQ: What if there are nested lists inside that list?
// ANS: There won't be for this assignment. There will be later, but that will
// be after we've got an easier way of managing memory.
SchemeVal *reverse(SchemeVal *list);

// Frees up all memory directly or indirectly referred to by list. This includes strings.
//
// FAQ: What if a string being pointed to is a string literal? That throws an
// error when freeing.
//
// ANS: Don't put a string literal into the list in the first place. All strings
// added to this list should be able to be freed by the cleanup function.
//
// FAQ: What if there are nested lists inside that list?
//
// ANS: There won't be for this assignment. There will be later, but that will
// be after we've got an easier way of managing memory.
void cleanup(SchemeVal *list);

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
