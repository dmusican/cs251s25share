// Tester for linked list.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "linkedlist.h"
#include "schemeval.h"

void testForward(SchemeVal *head, int correctLength, bool exceeds_expectations) {
  SchemeVal *object = head;
  assert(CONS_TYPE == object->type);
  assert(DOUBLE_TYPE == car(object)->type);
  assert(1 == car(object)->d);

  if (exceeds_expectations) {
    object = cdr(object);
    assert(CONS_TYPE == object->type);
    assert(STR_TYPE == car(object)->type);
    assert(!strcmp("2.0s", car(object)->s));

    object = cdr(object);
    assert(CONS_TYPE == object->type);
    assert(STR_TYPE == car(object)->type);
    assert(!strcmp("3.0s", car(object)->s));
  }

  object = cdr(object);
  assert(CONS_TYPE == object->type);
  assert(DOUBLE_TYPE == car(object)->type);
  assert(4 == car(object)->d);

  if (exceeds_expectations) {
    object = cdr(object);
    assert(CONS_TYPE == object->type);
    assert(STR_TYPE == car(object)->type);
    assert(!strcmp("5.0s", car(object)->s));
  }

  object = cdr(object);
  assert(CONS_TYPE == object->type);
  assert(DOUBLE_TYPE == car(object)->type);
  assert(6 == car(object)->d);

  object = cdr(object);
  assert(CONS_TYPE == object->type);
  assert(INT_TYPE == car(object)->type);
  assert(7 == car(object)->i);

  object = cdr(object);
  assert(EMPTY_TYPE == object->type);

  assert(correctLength == length(head));
  assert(!isEmpty(head));
}

void testBackward(SchemeVal *head, int correctLength, bool exceeds_expectations) {
  SchemeVal *value = head;

  assert(CONS_TYPE == value->type);
  assert(INT_TYPE == car(value)->type);
  assert(7 == car(value)->i);

  value = cdr(value);
  assert(CONS_TYPE == value->type);
  assert(DOUBLE_TYPE == car(value)->type);
  assert(6 == car(value)->d);

  if (exceeds_expectations) {
    value = cdr(value);
    assert(CONS_TYPE == value->type);
    assert(STR_TYPE == car(value)->type);
    assert(!strcmp("5.0s", car(value)->s));
  }

  value = cdr(value);
  assert(CONS_TYPE == value->type);
  assert(DOUBLE_TYPE == car(value)->type);
  assert(4 == car(value)->d);

  if (exceeds_expectations) {
    value = cdr(value);
    assert(CONS_TYPE == value->type);
    assert(STR_TYPE == car(value)->type);
    assert(!strcmp("3.0s", car(value)->s));

    value = cdr(value);
    assert(CONS_TYPE == value->type);
    assert(STR_TYPE == car(value)->type);
    assert(!strcmp("2.0s", car(value)->s));
  }

  value = cdr(value);
  assert(CONS_TYPE == value->type);
  assert(DOUBLE_TYPE == car(value)->type);
  assert(1 == car(value)->d);

  value = cdr(value);
  assert(EMPTY_TYPE == value->type);

  assert(correctLength == length(head));
  assert(!isEmpty(head));
}


int main(int argc, char **argv) {

  bool exceeds_expectations = false;
  if (argc == 2 && !strcmp(argv[1], "E")) {
    exceeds_expectations = true;
  }

  SchemeVal *head = makeEmpty();
  int correctLength = 0;
  assert(length(head) == correctLength);

  SchemeVal *reverseLengthZero = reverse(head);
  assert(length(reverseLengthZero) == correctLength);
  cleanup(reverseLengthZero);

  SchemeVal *val1 = malloc(sizeof(SchemeVal));
  val1->type = INT_TYPE;
  val1->i = 7;
  head = cons(val1,head);
  correctLength++;
  assert(length(head) == correctLength);

  SchemeVal *reverseLengthOne = reverse(head);
  assert(length(reverseLengthOne) == correctLength);
  cleanup(reverseLengthOne);

  SchemeVal *val2 = malloc(sizeof(SchemeVal));
  val2->type = DOUBLE_TYPE;
  val2->d = 6.00;
  head = cons(val2,head);
  correctLength++;
  assert(length(head) == correctLength);

  if (exceeds_expectations) {
    SchemeVal *val3 = malloc(sizeof(SchemeVal));
    val3->type = STR_TYPE;
    char *text = "5.0s";
    val3->s = malloc(sizeof(char)*(strlen(text) + 1));
    strcpy(val3->s,text);
    head = cons(val3,head);
    correctLength++;
    assert(length(head) == correctLength);
  }

  SchemeVal *val4 = malloc(sizeof(SchemeVal));
  val4->type = DOUBLE_TYPE;
  val4->d = 4.00000;
  head = cons(val4,head);
  correctLength++;
  assert(length(head) == correctLength);

  if (exceeds_expectations) {
    SchemeVal *val5 = malloc(sizeof(SchemeVal));
    val5->type = STR_TYPE;
    char *text = "3.0s";
    val5->s = malloc(sizeof(char)*(strlen(text) + 1));
    strcpy(val5->s,text);
    head = cons(val5,head);
    correctLength++;
    assert(length(head) == correctLength);

    SchemeVal *val6 = malloc(sizeof(SchemeVal));
    val6->type = STR_TYPE;
    text = "2.0s";
    val6->s = malloc(sizeof(char)*(strlen(text) + 1));
    strcpy(val6->s,text);
    head = cons(val6,head);
    correctLength++;
    assert(length(head) == correctLength);

  }

  SchemeVal *val7 = malloc(sizeof(SchemeVal));
  val7->type = DOUBLE_TYPE;
  val7->d = 1.0;
  head = cons(val7,head);
  correctLength++;
  assert(length(head) == correctLength);


  display(head);
  testForward(head, correctLength, exceeds_expectations);

  SchemeVal *rev = reverse(head);
  display(rev);

  testBackward(rev, correctLength, exceeds_expectations);

  cleanup(head);
  cleanup(rev);

  head = NULL;
  rev = NULL;
}
